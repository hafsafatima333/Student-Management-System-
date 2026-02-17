#include "updatestudentdialog.h"
#include "ui_updatestudentdialog.h"
#include <QMessageBox>
#include "linkedlist.h"

UpdateStudentDialog::UpdateStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateStudentDialog)
{
    ui->setupUi(this);

    ui->lineEdit_Name->setEnabled(false);
    ui->lineEdit_CGPA->setEnabled(false);
    ui->pushButton_Update->setEnabled(false);
}

UpdateStudentDialog::~UpdateStudentDialog()
{
    delete ui;
}

void UpdateStudentDialog::on_pushButton_Search_clicked()
{
    bool isInt;
    int searchRoll = ui->lineEdit_Roll->toPlainText().toInt(&isInt);

    if(!isInt) {
        QMessageBox::warning(this, "Error", "Please enter a valid Roll Number!");
        return;
    }

    Node* foundNode = globalLinkedList.searchByRoll(searchRoll);

    if(foundNode != nullptr)
    {
        QMessageBox::information(this, "Found", "Student Found: " + foundNode->name + "\nNow you can update details.");

        ui->lineEdit_Name->setEnabled(true);
        ui->lineEdit_CGPA->setEnabled(true);
        ui->pushButton_Update->setEnabled(true);

        ui->lineEdit_Name->setText(foundNode->name);
        ui->lineEdit_CGPA->setText(QString::number(foundNode->cgpa));
    }
    else
    {
        QMessageBox::warning(this, "Not Found", "Roll Number not found!");

        ui->lineEdit_Name->clear();
        ui->lineEdit_CGPA->clear();
        ui->lineEdit_Name->setEnabled(false);
        ui->lineEdit_CGPA->setEnabled(false);
        ui->pushButton_Update->setEnabled(false);
    }
}

void UpdateStudentDialog::on_pushButton_Update_clicked()
{
    int roll = ui->lineEdit_Roll->toPlainText().toInt();
    QString newName = ui->lineEdit_Name->toPlainText();
    QString newCgpaStr = ui->lineEdit_CGPA->toPlainText();

    if(newName.isEmpty() || newCgpaStr.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields!");
        return;
    }

    Node* nodeToUpdate = globalLinkedList.searchByRoll(roll);

    if(nodeToUpdate != nullptr)
    {
        nodeToUpdate->name = newName;
        nodeToUpdate->cgpa = newCgpaStr.toFloat();

        QMessageBox::information(this, "Success", "Student Details Updated Successfully!");
        this->close();
    }
    else {
        QMessageBox::warning(this, "Error", "Something went wrong. Student not found.");
    }
}

void UpdateStudentDialog::on_pushButton_3_clicked()
{
    this->close();
}
