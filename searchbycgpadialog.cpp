#include "searchbycgpadialog.h"
#include "ui_searchbycgpadialog.h"
#include "linkedlist.h"
#include <QMessageBox>
#include <QHeaderView>

SearchByCgpaDialog::SearchByCgpaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchByCgpaDialog)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(3);
    QStringList headers = {"Name", "Roll No", "CGPA"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QHeaderView *header = ui->tableWidget->horizontalHeader();

    header->setSectionResizeMode(0, QHeaderView::Stretch);

    header->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    header->setSectionResizeMode(2, QHeaderView::ResizeToContents);
}

SearchByCgpaDialog::~SearchByCgpaDialog()
{
    delete ui;
}

void SearchByCgpaDialog::setMode(bool rangeMode)
{
    isRangeSearch = rangeMode;

    if(rangeMode == true)
    {
        ui->label_Min->setVisible(true);
        ui->lineEdit_Min->setVisible(true);
        ui->label_Max->setVisible(true);
        ui->lineEdit_Max->setVisible(true);

        ui->label_Exact->setVisible(false);
        ui->lineEdit_Exact->setVisible(false);

        this->setWindowTitle("Search by CGPA Range");
    }
    else
    {
        ui->label_Exact->setVisible(true);
        ui->lineEdit_Exact->setVisible(true);

        ui->label_Min->setVisible(false);
        ui->lineEdit_Min->setVisible(false);
        ui->label_Max->setVisible(false);
        ui->lineEdit_Max->setVisible(false);

        this->setWindowTitle("Search by Exact CGPA");
    }
}

void SearchByCgpaDialog::on_pushButton_Search_clicked()
{
    ui->tableWidget->setRowCount(0);
    Node* temp = globalLinkedList.head;
    bool found = false;

    if(isRangeSearch)
    {
        if(ui->lineEdit_Min->text().isEmpty() || ui->lineEdit_Max->text().isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter Min and Max CGPA!");
            return;
        }

        float min = ui->lineEdit_Min->text().toFloat();
        float max = ui->lineEdit_Max->text().toFloat();

        while(temp != nullptr) {
            if(temp->cgpa >= min && temp->cgpa <= max) {
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);

                QTableWidgetItem* nameItem = new QTableWidgetItem(temp->name);
                QTableWidgetItem* rollItem = new QTableWidgetItem(QString::number(temp->rollNo));
                QTableWidgetItem* cgpaItem = new QTableWidgetItem(QString::number(temp->cgpa));

                nameItem->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
                rollItem->setTextAlignment(Qt::AlignCenter);
                cgpaItem->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget->setItem(row, 0, nameItem);
                ui->tableWidget->setItem(row, 1, rollItem);
                ui->tableWidget->setItem(row, 2, cgpaItem);
                found = true;
            }
            temp = temp->next;
        }
    }
    else
    {
        if(ui->lineEdit_Exact->text().isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter CGPA!");
            return;
        }

        float target = ui->lineEdit_Exact->text().toFloat();

        while(temp != nullptr) {
            if(qAbs(temp->cgpa - target) < 0.01) {
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);

                QTableWidgetItem* nameItem = new QTableWidgetItem(temp->name);
                QTableWidgetItem* rollItem = new QTableWidgetItem(QString::number(temp->rollNo));
                QTableWidgetItem* cgpaItem = new QTableWidgetItem(QString::number(temp->cgpa));

                nameItem->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
                rollItem->setTextAlignment(Qt::AlignCenter);
                cgpaItem->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget->setItem(row, 0, nameItem);
                ui->tableWidget->setItem(row, 1, rollItem);
                ui->tableWidget->setItem(row, 2, cgpaItem);
                found = true;
            }
            temp = temp->next;
        }
    }

    if(!found) QMessageBox::information(this, "Result", "No students found.");
}

void SearchByCgpaDialog::on_pushButton_Close_clicked()
{
    this->close();
}
