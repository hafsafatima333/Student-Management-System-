#include "updatestudentdialog.h"
#include "ui_updatestudentdialog.h"
#include <QMessageBox>
#include "linkedlist.h"

UpdateStudentDialog::UpdateStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateStudentDialog)
{
    ui->setupUi(this);

    // Shuru mein Update button aur input boxes ko band rakhein
    ui->lineEdit_Name->setEnabled(false);
    ui->lineEdit_CGPA->setEnabled(false);
    ui->pushButton_Update->setEnabled(false);
}

UpdateStudentDialog::~UpdateStudentDialog()
{
    delete ui;
}

// --- SEARCH BUTTON CLICKED ---
void UpdateStudentDialog::on_pushButton_Search_clicked()
{
    // 1. Roll Number uthao (TextEdit hai isliye .toPlainText() use kiya)
    bool isInt;
    int searchRoll = ui->lineEdit_Roll->toPlainText().toInt(&isInt);

    if(!isInt) {
        QMessageBox::warning(this, "Error", "Please enter a valid Roll Number!");
        return;
    }

    // 2. Linked List mein dhoondo
    Node* foundNode = globalLinkedList.searchByRoll(searchRoll);

    if(foundNode != nullptr)
    {
        // --- MATCH FOUND ---
        QMessageBox::information(this, "Found", "Student Found: " + foundNode->name + "\nNow you can update details.");

        // 3. Ab boxes ko Enable (Khol) do
        ui->lineEdit_Name->setEnabled(true);
        ui->lineEdit_CGPA->setEnabled(true);
        ui->pushButton_Update->setEnabled(true);

        // Purana data dikhao (String conversion ke sath)
        ui->lineEdit_Name->setText(foundNode->name);
        ui->lineEdit_CGPA->setText(QString::number(foundNode->cgpa));
    }
    else
    {
        // --- NOT FOUND ---
        QMessageBox::warning(this, "Not Found", "Roll Number not found!");

        // Wapis band kar do
        ui->lineEdit_Name->clear();
        ui->lineEdit_CGPA->clear();
        ui->lineEdit_Name->setEnabled(false);
        ui->lineEdit_CGPA->setEnabled(false);
        ui->pushButton_Update->setEnabled(false);
    }
}

// --- UPDATE BUTTON CLICKED ---
void UpdateStudentDialog::on_pushButton_Update_clicked()
{
    // 1. Roll No aur Naya Data uthao (.toPlainText() ke sath)
    int roll = ui->lineEdit_Roll->toPlainText().toInt();
    QString newName = ui->lineEdit_Name->toPlainText();
    QString newCgpaStr = ui->lineEdit_CGPA->toPlainText();

    if(newName.isEmpty() || newCgpaStr.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields!");
        return;
    }

    // 2. Node ko update karo
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

// Cancel Button
void UpdateStudentDialog::on_pushButton_3_clicked()
{
    this->close();
}
