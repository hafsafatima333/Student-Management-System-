/********************************************************************************
** Form generated from reading UI file 'displaystudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSTUDENTDIALOG_H
#define UI_DISPLAYSTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayStudentDialog
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton_Close;

    void setupUi(QDialog *DisplayStudentDialog)
    {
        if (DisplayStudentDialog->objectName().isEmpty())
            DisplayStudentDialog->setObjectName("DisplayStudentDialog");
        DisplayStudentDialog->resize(1248, 915);
        DisplayStudentDialog->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        tableWidget = new QTableWidget(DisplayStudentDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(330, 0, 661, 601));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: #2b2b2b;  \n"
"    color: white;              \n"
"    gridline-color: #555555;    \n"
"    border: 2px solid #555555;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #4a148c;   \n"
"    color: white;\n"
"    padding: 6px;\n"
"    border: 1px solid #2b2b2b;\n"
"    font-weight: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #7c43bd;   \n"
"    color: white;\n"
"}\n"
"QPushButton {\n"
"    min-height: 30px; \n"
"    max-height: 30px;  \n"
"}"));
        pushButton_Close = new QPushButton(DisplayStudentDialog);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setGeometry(QRect(910, 610, 81, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton_Close->setFont(font);
        pushButton_Close->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));

        retranslateUi(DisplayStudentDialog);

        QMetaObject::connectSlotsByName(DisplayStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *DisplayStudentDialog)
    {
        DisplayStudentDialog->setWindowTitle(QCoreApplication::translate("DisplayStudentDialog", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DisplayStudentDialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DisplayStudentDialog", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DisplayStudentDialog", "Cgpa", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DisplayStudentDialog", "Attendance", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("DisplayStudentDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayStudentDialog: public Ui_DisplayStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSTUDENTDIALOG_H
