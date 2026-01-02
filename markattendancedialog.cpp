#include "markattendancedialog.h"
#include "ui_markattendancedialog.h"
#include "linkedlist.h"
#include <QMessageBox>

MarkAttendanceDialog::MarkAttendanceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MarkAttendanceDialog)
{
    ui->setupUi(this);

    // Shuru mein Marking Section band rakhein
    ui->comboBox_Week->setEnabled(false);
    ui->comboBox_Day->setEnabled(false);
    ui->comboBox_Status->setEnabled(false);
    ui->pushButton_Mark->setEnabled(false);
}

MarkAttendanceDialog::~MarkAttendanceDialog()
{
    delete ui;
}

// --- SEARCH BUTTON ---
void MarkAttendanceDialog::on_pushButton_Search_clicked()
{
    int roll = ui->lineEdit_Roll->text().toInt();
    Node* temp = globalLinkedList.searchByRoll(roll);

    if(temp != nullptr)
    {
        // Student mil gaya -> Naam aur Attendance show karo
        ui->lineEdit_Name->setText(temp->name);
        ui->lineEdit_CurrentAtt->setText(QString::number(temp->attendance) + "%");

        // Marking Section khol do
        ui->comboBox_Week->setEnabled(true);
        ui->comboBox_Day->setEnabled(true);
        ui->comboBox_Status->setEnabled(true);
        ui->pushButton_Mark->setEnabled(true);
    }
    else
    {
        QMessageBox::warning(this, "Not Found", "Student not found!");
        ui->lineEdit_Name->clear();
        ui->lineEdit_CurrentAtt->clear();
    }
}

// --- MARK BUTTON ---
void MarkAttendanceDialog::on_pushButton_Mark_clicked()
{
    int roll = ui->lineEdit_Roll->text().toInt();
    Node* temp = globalLinkedList.searchByRoll(roll);

    if(temp != nullptr)
    {
        // 1. User ne kya select kiya?
        int week = ui->comboBox_Week->currentIndex(); // 0 se 7
        int day  = ui->comboBox_Day->currentIndex();  // 0 se 2
        int status = (ui->comboBox_Status->currentText() == "Present") ? 1 : 0;

        // 2. Data Update
        temp->weeklyAttendance[week][day] = status;

        // 3. Percentage Calculation (Aapka Logic)
        int total = 0, present = 0;
        for(int i=0; i<8; i++) {
            for(int j=0; j<3; j++) {
                if(temp->weeklyAttendance[i][j] != -1) { // Agar attendance lagi hai
                    total++;
                    if(temp->weeklyAttendance[i][j] == 1) present++;
                }
            }
        }

        // Percentage nikalna
        if(total > 0)
            temp->attendance = (float)present * 100 / total;
        else
            temp->attendance = 0;

        // 4. UI Update
        ui->lineEdit_CurrentAtt->setText(QString::number(temp->attendance) + "%");
        QMessageBox::information(this, "Success", "Attendance Marked!");
    }
}

// --- CLOSE BUTTON ---
void MarkAttendanceDialog::on_pushButton_Close_clicked()
{
    this->close();
}
