#include "searchbyrolldialog.h"
#include "ui_searchbyrolldialog.h"
#include "linkedlist.h"
#include <QMessageBox>

SearchByRollDialog::SearchByRollDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchByRollDialog)
{
    ui->setupUi(this);
}

SearchByRollDialog::~SearchByRollDialog()
{
    delete ui;
}

void SearchByRollDialog::on_pushButton_Search_clicked()
{
    QString rollStr = ui->lineEdit_Roll->text();

    if(rollStr.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Roll Number!");
        return;
    }

    int roll = rollStr.toInt();

    Node* temp = globalLinkedList.searchByRoll(roll);

    // 3. Result Show karo
    if(temp != nullptr)
    {
        ui->lineEdit_Name->setText(temp->name);
        ui->lineEdit_CGPA->setText(QString::number(temp->cgpa));
        ui->lineEdit_Attendance->setText(QString::number(temp->attendance, 'f', 1) + "%");

        QMessageBox::information(this, "Found", "Student Found Successfully!");
    }
    else
    {
        QMessageBox::warning(this, "Not Found", "Student with this Roll Number not found.");

        ui->lineEdit_Name->clear();
        ui->lineEdit_CGPA->clear();
        ui->lineEdit_Attendance->clear();
    }
}

void SearchByRollDialog::on_pushButton_Close_clicked()
{
    this->close();
}
