/********************************************************************************
** Form generated from reading UI file 'deletestudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESTUDENTDIALOG_H
#define UI_DELETESTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteStudentDialog
{
public:
    QFrame *frame;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Close;
    QLineEdit *lineEdit_Roll_2;

    void setupUi(QDialog *DeleteStudentDialog)
    {
        if (DeleteStudentDialog->objectName().isEmpty())
            DeleteStudentDialog->setObjectName("DeleteStudentDialog");
        DeleteStudentDialog->resize(1939, 1001);
        DeleteStudentDialog->setStyleSheet(QString::fromUtf8("QDialog { \n"
"    background-color: #1f1f1f; \n"
"    color: white; \n"
"}\n"
"\n"
"QLabel { \n"
"    color: white; \n"
"    font-weight: bold; \n"
"    font-size: 14px; \n"
"}\n"
"\n"
"QLineEdit { \n"
"    background-color: #2b2b2b; \n"
"    color: white; \n"
"    border: 1px solid #555555; \n"
"    border-radius: 5px; \n"
"    padding: 6px; \n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QPushButton { \n"
"    background-color: #2b2b2b; \n"
"    color: white; \n"
"    border: 2px solid #8e44ad; \n"
"    border-radius: 6px; \n"
"    padding: 6px 15px; \n"
"    font-weight: bold; \n"
"}\n"
"\n"
"QPushButton:hover { \n"
"    background-color: #8e44ad; \n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"    background-color: #732d91; \n"
"}"));
        frame = new QFrame(DeleteStudentDialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(500, 140, 331, 251));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 30, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 90, 231, 16));
        QFont font1;
        font1.setBold(true);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_Delete = new QPushButton(frame);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(170, 170, 111, 41));
        pushButton_Delete->setFont(font1);
        pushButton_Delete->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_Close = new QPushButton(frame);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setGeometry(QRect(50, 170, 111, 41));
        pushButton_Close->setFont(font1);
        pushButton_Close->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_Roll_2 = new QLineEdit(frame);
        lineEdit_Roll_2->setObjectName("lineEdit_Roll_2");
        lineEdit_Roll_2->setGeometry(QRect(50, 119, 231, 31));

        retranslateUi(DeleteStudentDialog);

        QMetaObject::connectSlotsByName(DeleteStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteStudentDialog)
    {
        DeleteStudentDialog->setWindowTitle(QCoreApplication::translate("DeleteStudentDialog", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("DeleteStudentDialog", "Delete Student", nullptr));
        label_6->setText(QCoreApplication::translate("DeleteStudentDialog", "Enter Roll Number to Delete", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("DeleteStudentDialog", "Delete", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("DeleteStudentDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteStudentDialog: public Ui_DeleteStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESTUDENTDIALOG_H
