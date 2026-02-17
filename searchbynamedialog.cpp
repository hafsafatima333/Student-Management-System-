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

void SearchByNameDialog::on_pushButton_clicked()
{
    QString targetName = ui->lineEdit->text().trimmed();

    if(targetName.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Please enter a name to search!");
        return;
    }

    Node* foundNode = globalLinkedList.searchByName(targetName);

    if (foundNode != nullptr)
    {
        ui->lineEdit_Name->setText(foundNode->name);
        ui->lineEdit_Roll->setText(QString::number(foundNode->rollNo));
        ui->lineEdit_CGPA->setText(QString::number(foundNode->cgpa));

        QMessageBox::information(this, "Found", "Student Found Successfully!");
    }
    else
    {
        QMessageBox::warning(this, "Not Found", "Student with name '" + targetName + "' not found!");

        ui->lineEdit_Name->clear();
        ui->lineEdit_Roll->clear();
        ui->lineEdit_CGPA->clear();
    }
}

void SearchByNameDialog::on_pushButton_2_clicked()
{
    this->close();
}
