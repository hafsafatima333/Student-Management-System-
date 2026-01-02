/********************************************************************************
** Form generated from reading UI file 'searchbycgpadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYCGPADIALOG_H
#define UI_SEARCHBYCGPADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchByCgpaDialog
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_Exact;
    QLineEdit *lineEdit_Exact;
    QLabel *label_Min;
    QLineEdit *lineEdit_Min;
    QLabel *label_Max;
    QLineEdit *lineEdit_Max;
    QPushButton *pushButton_Search;
    QTableWidget *tableWidget;
    QPushButton *pushButton_Close;

    void setupUi(QDialog *SearchByCgpaDialog)
    {
        if (SearchByCgpaDialog->objectName().isEmpty())
            SearchByCgpaDialog->setObjectName("SearchByCgpaDialog");
        SearchByCgpaDialog->resize(2481, 935);
        SearchByCgpaDialog->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 14px; \n"
"}\n"
"\n"
"\n"
"QLineEdit {\n"
"    background-color: #333333; \n"
"    color: white;\n"
"    border: 1px solid #555555;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: #222222; \n"
"    color: white;             \n"
"    gridline-color: white;     \n"
"    border: 1px solid #555555;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #333333; \n"
"    color: white;              \n"
"    font-weight: bold;        \n"
"    border: 1px solid white;  \n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    border: 2px solid #8e24aa; \n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #8e24aa;\n"
"}"));
        frame = new QFrame(SearchByCgpaDialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(480, 70, 351, 521));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        label_Exact = new QLabel(frame);
        label_Exact->setObjectName("label_Exact");
        label_Exact->setFont(font);
        label_Exact->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(label_Exact);

        lineEdit_Exact = new QLineEdit(frame);
        lineEdit_Exact->setObjectName("lineEdit_Exact");

        verticalLayout->addWidget(lineEdit_Exact);

        label_Min = new QLabel(frame);
        label_Min->setObjectName("label_Min");
        label_Min->setFont(font);
        label_Min->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(label_Min);

        lineEdit_Min = new QLineEdit(frame);
        lineEdit_Min->setObjectName("lineEdit_Min");

        verticalLayout->addWidget(lineEdit_Min);

        label_Max = new QLabel(frame);
        label_Max->setObjectName("label_Max");
        label_Max->setFont(font);
        label_Max->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(label_Max);

        lineEdit_Max = new QLineEdit(frame);
        lineEdit_Max->setObjectName("lineEdit_Max");

        verticalLayout->addWidget(lineEdit_Max);

        pushButton_Search = new QPushButton(frame);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setFont(font);
        pushButton_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Search);

        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        pushButton_Close = new QPushButton(frame);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setFont(font);
        pushButton_Close->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Close);


        retranslateUi(SearchByCgpaDialog);

        QMetaObject::connectSlotsByName(SearchByCgpaDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchByCgpaDialog)
    {
        SearchByCgpaDialog->setWindowTitle(QCoreApplication::translate("SearchByCgpaDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchByCgpaDialog", "Search Student By CGPA", nullptr));
        label_Exact->setText(QCoreApplication::translate("SearchByCgpaDialog", "Enter  Student CGPA", nullptr));
        label_Min->setText(QCoreApplication::translate("SearchByCgpaDialog", "Min CGPA", nullptr));
        label_Max->setText(QCoreApplication::translate("SearchByCgpaDialog", "Max  CGPA", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("SearchByCgpaDialog", "Search", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SearchByCgpaDialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SearchByCgpaDialog", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SearchByCgpaDialog", "CGPA", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("SearchByCgpaDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchByCgpaDialog: public Ui_SearchByCgpaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYCGPADIALOG_H
