/********************************************************************************
** Form generated from reading UI file 'addstudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTDIALOG_H
#define UI_ADDSTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddStudentDialog
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_FatherName;
    QLineEdit *lineEdit_Roll;

    void setupUi(QDialog *AddStudentDialog)
    {
        if (AddStudentDialog->objectName().isEmpty())
            AddStudentDialog->setObjectName("AddStudentDialog");
        AddStudentDialog->resize(1137, 1336);
        QFont font;
        font.setBold(true);
        AddStudentDialog->setFont(font);
        AddStudentDialog->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: #333333; \n"
"    color: white;            \n"
"    font-weight: bold;\n"
"    border: 1px solid #555555;\n"
"    padding: 5px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    border: 2px solid #8e24aa;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    min-width: 80px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #8e24aa; \n"
"}"));
        frame = new QFrame(AddStudentDialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(380, 140, 391, 381));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 191, 41));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 111, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 240, 111, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 170, 121, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_Add = new QPushButton(frame);
        pushButton_Add->setObjectName("pushButton_Add");
        pushButton_Add->setGeometry(QRect(250, 310, 111, 41));
        pushButton_Add->setFont(font);
        pushButton_Add->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 310, 111, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_Name = new QLineEdit(frame);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(50, 109, 311, 31));
        lineEdit_FatherName = new QLineEdit(frame);
        lineEdit_FatherName->setObjectName("lineEdit_FatherName");
        lineEdit_FatherName->setGeometry(QRect(52, 190, 311, 31));
        lineEdit_Roll = new QLineEdit(frame);
        lineEdit_Roll->setObjectName("lineEdit_Roll");
        lineEdit_Roll->setGeometry(QRect(50, 260, 311, 31));

        retranslateUi(AddStudentDialog);

        QMetaObject::connectSlotsByName(AddStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStudentDialog)
    {
        AddStudentDialog->setWindowTitle(QCoreApplication::translate("AddStudentDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddStudentDialog", "Add Student", nullptr));
        label_2->setText(QCoreApplication::translate("AddStudentDialog", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddStudentDialog", "Roll No", nullptr));
        label_4->setText(QCoreApplication::translate("AddStudentDialog", "Father Name", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("AddStudentDialog", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddStudentDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentDialog: public Ui_AddStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTDIALOG_H
