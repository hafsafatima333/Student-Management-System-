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

    // --- CONSTRUCTOR SETUP ---
    // 1. Roll No: Sirf Numbers allow karo (0 se 999999 tak)
    ui->lineEdit_Roll->setValidator(new QIntValidator(0, 999999, this));
}

AddStudentDialog::~AddStudentDialog()
{
    delete ui;
}

// --- ADD BUTTON CLICKED ---
void AddStudentDialog::on_pushButton_Add_clicked()
{
    // 1. Values uthao
    QString name = ui->lineEdit_Name->text().trimmed();
    QString fatherName = ui->lineEdit_FatherName->text().trimmed();
    QString rollStr = ui->lineEdit_Roll->text().trimmed();

    // --- CHECK 1: KHALI FIELDS ---
    if(name.isEmpty() || fatherName.isEmpty() || rollStr.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please fill Name, Father Name and Roll No!");
        return;
    }

    // --- CHECK 2: ROLL NUMBER VALIDATION ---
    bool isRollNumber;
    int rollInt = rollStr.toInt(&isRollNumber);

    if(!isRollNumber) {
        QMessageBox::warning(this, "Error", "Roll Number must be valid digits!");
        return;
    }

    // --- CHECK 3: NAME VALIDATION (No Numbers) ---
    for(int i = 0; i < name.length(); i++) {
        if(!name.at(i).isLetter() && name.at(i) != ' ') {
            QMessageBox::warning(this, "Error", "Name cannot contain numbers or symbols!");
            return;
        }
    }

    // --- CHECK 4: FATHER NAME VALIDATION (No Numbers) ---
    for(int i = 0; i < fatherName.length(); i++) {
        if(!fatherName.at(i).isLetter() && fatherName.at(i) != ' ') {
            QMessageBox::warning(this, "Error", "Father Name cannot contain numbers or symbols!");
            return;
        }
    }

    // --- DUPLICATE CHECK (Global List Check) ---
    if(globalLinkedList.isRollExist(rollInt))
    {
        QMessageBox::warning(this, "Duplicate", "Roll Number already exists!");
        return;
    }

    // --- SAVE TO LIST ---
    // Note: Humare paas abhi Linked List mein Father Name rakhne ki jagah nahi hai,
    // isliye hum sirf Name aur Roll No bhej rahe hain.
    // CGPA default 0.0 bhej rahe hain kyunki form mein nahi hai.

    globalLinkedList.insertStudent(name, rollInt, 0.0);

    // Success Message
    QMessageBox::information(this, "Success", "Student Added Successfully!");

    // Window band kar do
    this->close();
}

// --- CANCEL / CLOSE BUTTON ---
// Make sure Designer mein button ka naam 'pushButton_2' hi ho.
void AddStudentDialog::on_pushButton_2_clicked()
{
    this->close();
}
