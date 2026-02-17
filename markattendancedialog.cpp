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

void MarkAttendanceDialog::on_pushButton_Search_clicked()
{
    int roll = ui->lineEdit_Roll->text().toInt();
    Node* temp = globalLinkedList.searchByRoll(roll);

    if(temp != nullptr)
    {
        ui->lineEdit_Name->setText(temp->name);
        ui->lineEdit_CurrentAtt->setText(QString::number(temp->attendance) + "%");

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

void MarkAttendanceDialog::on_pushButton_Mark_clicked()
{
    int roll = ui->lineEdit_Roll->text().toInt();
    Node* temp = globalLinkedList.searchByRoll(roll);

    if(temp != nullptr)
    {
        int week = ui->comboBox_Week->currentIndex();
        int day  = ui->comboBox_Day->currentIndex();
        int status = (ui->comboBox_Status->currentText() == "Present") ? 1 : 0;

        temp->weeklyAttendance[week][day] = status;

        int total = 0, present = 0;
        for(int i=0; i<8; i++) {
            for(int j=0; j<3; j++) {
                if(temp->weeklyAttendance[i][j] != -1) {
                    total++;
                    if(temp->weeklyAttendance[i][j] == 1) present++;
                }
            }
        }

        if(total > 0)
            temp->attendance = (float)present * 100 / total;
        else
            temp->attendance = 0;

        ui->lineEdit_CurrentAtt->setText(QString::number(temp->attendance) + "%");
        QMessageBox::information(this, "Success", "Attendance Marked!");
    }
}

void MarkAttendanceDialog::on_pushButton_Close_clicked()
{
    this->close();
}
