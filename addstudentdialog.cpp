#include "addstudentdialog.h"
#include "ui_addstudentdialog.h"
#include <QMessageBox>
#include "linkedlist.h"
#include <QIntValidator>

AddStudentDialog::AddStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddStudentDialog)
{
    ui->setupUi(this);


    ui->lineEdit_Roll->setValidator(new QIntValidator(0, 999999, this));
}

AddStudentDialog::~AddStudentDialog()
{
    delete ui;
}

void AddStudentDialog::on_pushButton_Add_clicked()
{
    QString name = ui->lineEdit_Name->text().trimmed();
    QString fatherName = ui->lineEdit_FatherName->text().trimmed();
    QString rollStr = ui->lineEdit_Roll->text().trimmed();

    if(name.isEmpty() || fatherName.isEmpty() || rollStr.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please fill Name, Father Name and Roll No!");
        return;
    }

    bool isRollNumber;
    int rollInt = rollStr.toInt(&isRollNumber);

    if(!isRollNumber) {
        QMessageBox::warning(this, "Error", "Roll Number must be valid digits!");
        return;
    }

    for(int i = 0; i < name.length(); i++) {
        if(!name.at(i).isLetter() && name.at(i) != ' ') {
            QMessageBox::warning(this, "Error", "Name cannot contain numbers or symbols!");
            return;
        }
    }

    for(int i = 0; i < fatherName.length(); i++) {
        if(!fatherName.at(i).isLetter() && fatherName.at(i) != ' ') {
            QMessageBox::warning(this, "Error", "Father Name cannot contain numbers or symbols!");
            return;
        }
    }

    if(globalLinkedList.isRollExist(rollInt))
    {
        QMessageBox::warning(this, "Duplicate", "Roll Number already exists!");
        return;
    }



    globalLinkedList.insertStudent(name, rollInt, 0.0);

    QMessageBox::information(this, "Success", "Student Added Successfully!");

    this->close();
}


void AddStudentDialog::on_pushButton_2_clicked()
{
    this->close();
}

void AddStudentDialog::on_AddStudentDialog_accepted()
{

}

