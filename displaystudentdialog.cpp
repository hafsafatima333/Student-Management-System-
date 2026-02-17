#include "displaystudentdialog.h"
#include "ui_displaystudentdialog.h"
#include "linkedlist.h"
#include <QHeaderView>

DisplayStudentDialog::DisplayStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DisplayStudentDialog)
{
    ui->setupUi(this);

    QStringList headers = {"Name", "Roll No", "CGPA", "Attendance"};
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QHeaderView *header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(0, QHeaderView::Stretch);
    header->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    header->setSectionResizeMode(2, QHeaderView::ResizeToContents);
    header->setSectionResizeMode(3, QHeaderView::ResizeToContents);

    ui->tableWidget->setRowCount(0);

    Node* temp = globalLinkedList.head;
    int row = 0;

    while(temp != nullptr)
    {
        ui->tableWidget->insertRow(row);



        QTableWidgetItem *nameItem = new QTableWidgetItem(temp->name);

        QTableWidgetItem *rollItem = new QTableWidgetItem(QString::number(temp->rollNo));
        QTableWidgetItem *cgpaItem = new QTableWidgetItem(QString::number(temp->cgpa));
        QTableWidgetItem *attendItem = new QTableWidgetItem(QString::number(temp->attendance) + "%");

        nameItem->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        rollItem->setTextAlignment(Qt::AlignCenter);
        cgpaItem->setTextAlignment(Qt::AlignCenter);
        attendItem->setTextAlignment(Qt::AlignCenter);

        ui->tableWidget->setItem(row, 0, nameItem);
        ui->tableWidget->setItem(row, 1, rollItem);
        ui->tableWidget->setItem(row, 2, cgpaItem);
        ui->tableWidget->setItem(row, 3, attendItem);

        temp = temp->next;
        row++;
    }
}

DisplayStudentDialog::~DisplayStudentDialog()
{
    delete ui;
}

void DisplayStudentDialog::on_pushButton_Close_clicked()
{
    this->close();
}
