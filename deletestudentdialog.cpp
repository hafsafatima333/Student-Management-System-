#include "deletestudentdialog.h"
#include "ui_deletestudentdialog.h"
#include "linkedlist.h"
#include <QMessageBox>
#include <QIntValidator>

DeleteStudentDialog::DeleteStudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteStudentDialog)
{
    ui->setupUi(this);

    this->setStyleSheet("QDialog { background-color: #1f1f1f; color: white; } QLabel { color: white; font-weight: bold; } QLineEdit { background-color: #2b2b2b; color: white; border: 1px solid #555; } QPushButton { background-color: #2b2b2b; color: white; border: 2px solid #c0392b; border-radius: 5px; padding: 5px; } QPushButton:hover { background-color: #c0392b; }");

    ui->lineEdit_Roll_2->setValidator(new QIntValidator(0, 999999, this));
}

DeleteStudentDialog::~DeleteStudentDialog()
{
    delete ui;
}

void DeleteStudentDialog::on_pushButton_Delete_clicked()
{
    QString rollStr = ui->lineEdit_Roll_2->text();

    if(rollStr.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter a Roll Number!");
        return;
    }

    int roll = rollStr.toInt();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Delete", "Are you sure you want to delete this student?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        bool deleted = globalLinkedList.deleteStudent(roll);

        if(deleted) {
            QMessageBox::information(this, "Success", "Student Deleted Successfully!");
            this->close();
        } else {
            QMessageBox::critical(this, "Error", "Student with this Roll Number not found!");
        }
    }
}

void DeleteStudentDialog::on_pushButton_Close_clicked()
{
    this->close();
}
