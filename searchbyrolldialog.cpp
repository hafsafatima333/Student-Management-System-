#include "searchbyrolldialog.h"
#include "ui_searchbyrolldialog.h"
#include "linkedlist.h"
#include <QMessageBox> // <--- Prompt ke liye zaroori

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

// --- SEARCH BUTTON ---
void SearchByRollDialog::on_pushButton_Search_clicked()
{
    // 1. Roll No uthao
    QString rollStr = ui->lineEdit_Roll->text();

    if(rollStr.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Roll Number!");
        return;
    }

    int roll = rollStr.toInt();

    // 2. Search Logic
    // (Agar aapke paas 'searchByRoll' function nahi bana hua, to bataiyega, hum loop laga denge)
    Node* temp = globalLinkedList.searchByRoll(roll);

    // 3. Result Show karo
    if(temp != nullptr)
    {
        // --- MATCH MIL GAYA! ---
        ui->lineEdit_Name->setText(temp->name);
        ui->lineEdit_CGPA->setText(QString::number(temp->cgpa));
        ui->lineEdit_Attendance->setText(QString::number(temp->attendance, 'f', 1) + "%");

        // --- YE LINE ADD KI HAI (Success Message) ---
        QMessageBox::information(this, "Found", "Student Found Successfully!");
    }
    else
    {
        // --- NAHI MILA ---
        QMessageBox::warning(this, "Not Found", "Student with this Roll Number not found.");

        // Boxes saaf kar do
        ui->lineEdit_Name->clear();
        ui->lineEdit_CGPA->clear();
        ui->lineEdit_Attendance->clear();
    }
}

// --- CLOSE BUTTON ---
void SearchByRollDialog::on_pushButton_Close_clicked()
{
    this->close();
}
