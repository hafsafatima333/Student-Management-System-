#include "searchbynamedialog.h"
#include "ui_searchbynamedialog.h"
#include <QMessageBox>
#include "linkedlist.h"

SearchByNameDialog::SearchByNameDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchByNameDialog)
{
    ui->setupUi(this);
}

SearchByNameDialog::~SearchByNameDialog()
{
    delete ui;
}

// --- SEARCH BUTTON CLICKED ---
void SearchByNameDialog::on_pushButton_clicked()
{
    // 1. User ne kya naam likha?
    QString targetName = ui->lineEdit->text().trimmed();

    if(targetName.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Please enter a name to search!");
        return;
    }

    // 2. Linked List se poocho
    Node* foundNode = globalLinkedList.searchByName(targetName);

    if (foundNode != nullptr)
    {
        // --- MATCH MIL GAYA! ---
        ui->lineEdit_Name->setText(foundNode->name);
        ui->lineEdit_Roll->setText(QString::number(foundNode->rollNo));
        ui->lineEdit_CGPA->setText(QString::number(foundNode->cgpa));

        // --- YE LINE AB UNCOMMENT HO GAYI HAI (Prompt Aayega) ---
        QMessageBox::information(this, "Found", "Student Found Successfully!");
    }
    else
    {
        // --- AGAR NAHI MILA ---
        QMessageBox::warning(this, "Not Found", "Student with name '" + targetName + "' not found!");

        // Boxes clear kar do
        ui->lineEdit_Name->clear();
        ui->lineEdit_Roll->clear();
        ui->lineEdit_CGPA->clear();
    }
}

// --- CLOSE BUTTON ---
void SearchByNameDialog::on_pushButton_2_clicked()
{
    this->close();
}
