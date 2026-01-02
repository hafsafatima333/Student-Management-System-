#include "displaystudentdialog.h"
#include "ui_displaystudentdialog.h"
#include "linkedlist.h" // Tumhari existing file
#include <QHeaderView>

DisplayStudentDialog::DisplayStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DisplayStudentDialog)
{
    ui->setupUi(this);

    // --- 1. COLUMN SETUP ---
    QStringList headers = {"Name", "Roll No", "CGPA", "Attendance"};
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // --- 2. STYLING FIX (Layout) ---
    QHeaderView *header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(0, QHeaderView::Stretch); // Name ko stretch karo
    header->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    header->setSectionResizeMode(2, QHeaderView::ResizeToContents);
    header->setSectionResizeMode(3, QHeaderView::ResizeToContents);

    // --- 3. DATA LOAD ---
    ui->tableWidget->setRowCount(0);

    // Global list use kar rahe hain
    Node* temp = globalLinkedList.head;
    int row = 0;

    while(temp != nullptr)
    {
        ui->tableWidget->insertRow(row);

        // --- CHANGE IS HERE ---
        // Kyunki tumhari linkedlist.h mein 'QString name' hai,
        // hum seedha 'temp->name' use karenge. Koi conversion nahi chahiye.

        QTableWidgetItem *nameItem = new QTableWidgetItem(temp->name);

        // Baaki cheezein same hain
        QTableWidgetItem *rollItem = new QTableWidgetItem(QString::number(temp->rollNo));
        QTableWidgetItem *cgpaItem = new QTableWidgetItem(QString::number(temp->cgpa));
        QTableWidgetItem *attendItem = new QTableWidgetItem(QString::number(temp->attendance) + "%");

        // Styling (Optional: Center Align)
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
