#include "sortbyrolldialog.h"
#include "ui_sortbyrolldialog.h"
#include "linkedlist.h"
#include <QMessageBox>

SortByRollDialog::SortByRollDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SortByRollDialog)
{
    ui->setupUi(this);

    // --- TABLE SETUP ---
    ui->tableWidget->setColumnCount(4); // 4 Cheezein dikhayenge
    QStringList headers = {"Name", "Roll No", "CGPA", "Attendance"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

SortByRollDialog::~SortByRollDialog()
{
    delete ui;
}

// --- SORT & DISPLAY BUTTON ---
void SortByRollDialog::on_pushButton_Sort_clicked()
{
    Node* head = globalLinkedList.head;

    // 1. Agar list khali hai to wapis jao
    if(head == nullptr) {
        QMessageBox::information(this, "Empty", "No students to sort!");
        return;
    }

    // 2. Node Count karo (Bubble sort ke liye)
    int count = 0;
    Node* temp = head;
    while(temp != nullptr) {
        count++;
        temp = temp->next;
    }

    // 3. BUBBLE SORT LOGIC (Roll No ke hisaab se)
    for(int i = 0; i < count - 1; i++)
    {
        Node* current = head;
        for(int j = 0; j < count - 1 - i; j++)
        {
            // Agar pehla wala doosre se bada hai -> SWAP karo
            if(current->rollNo > current->next->rollNo)
            {
                // Values Swap (Adla Badli)
                std::swap(current->rollNo, current->next->rollNo);
                std::swap(current->name, current->next->name);
                std::swap(current->cgpa, current->next->cgpa);
                std::swap(current->attendance, current->next->attendance);

                // Attendance Array bhi swap karna padega
                for(int w=0; w<8; w++) {
                    for(int d=0; d<3; d++) {
                        std::swap(current->weeklyAttendance[w][d], current->next->weeklyAttendance[w][d]);
                    }
                }
            }
            current = current->next;
        }
    }

    // 4. DISPLAY IN TABLE (Ab list sort ho chuki hai)
    ui->tableWidget->setRowCount(0); // Purana saaf karo
    temp = head; // Wapis shuru se

    while(temp != nullptr)
    {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(temp->name));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(temp->rollNo)));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(temp->cgpa)));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(temp->attendance) + "%"));

        temp = temp->next;
    }

    QMessageBox::information(this, "Success", "Students sorted by Roll Number!");
}

// --- CLOSE BUTTON ---
void SortByRollDialog::on_pushButton_Close_clicked()
{
    this->close();
}
