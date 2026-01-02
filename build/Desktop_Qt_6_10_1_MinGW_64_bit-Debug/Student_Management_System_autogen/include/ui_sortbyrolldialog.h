/********************************************************************************
** Form generated from reading UI file 'sortbyrolldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTBYROLLDIALOG_H
#define UI_SORTBYROLLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortByRollDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Sort;
    QPushButton *pushButton_Close;
    QTableWidget *tableWidget;

    void setupUi(QDialog *SortByRollDialog)
    {
        if (SortByRollDialog->objectName().isEmpty())
            SortByRollDialog->setObjectName("SortByRollDialog");
        SortByRollDialog->resize(1879, 1027);
        SortByRollDialog->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"QLineEdit {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    border: 1px solid #555555;\n"
"    padding: 5px;\n"
"}\n"
"QTableWidget {\n"
"    background-color: #222222;\n"
"    color: white;\n"
"    gridline-color: white;\n"
"    border: 1px solid #555555;\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border: 1px solid white;\n"
"    padding: 4px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    border: 2px solid #8e24aa;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #8e24aa;\n"
"}"));
        widget = new QWidget(SortByRollDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(490, 120, 341, 321));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Sort = new QPushButton(widget);
        pushButton_Sort->setObjectName("pushButton_Sort");

        verticalLayout->addWidget(pushButton_Sort);

        pushButton_Close = new QPushButton(widget);
        pushButton_Close->setObjectName("pushButton_Close");

        verticalLayout->addWidget(pushButton_Close);

        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);


        retranslateUi(SortByRollDialog);

        QMetaObject::connectSlotsByName(SortByRollDialog);
    } // setupUi

    void retranslateUi(QDialog *SortByRollDialog)
    {
        SortByRollDialog->setWindowTitle(QCoreApplication::translate("SortByRollDialog", "Dialog", nullptr));
        pushButton_Sort->setText(QCoreApplication::translate("SortByRollDialog", "Sort And Display List", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("SortByRollDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortByRollDialog: public Ui_SortByRollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTBYROLLDIALOG_H
