/********************************************************************************
** Form generated from reading UI file 'updatestudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESTUDENTDIALOG_H
#define UI_UPDATESTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UpdateStudentDialog
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *lineEdit_Roll;
    QTextEdit *lineEdit_CGPA;
    QTextEdit *lineEdit_Name;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Update;
    QPushButton *pushButton_Search;

    void setupUi(QDialog *UpdateStudentDialog)
    {
        if (UpdateStudentDialog->objectName().isEmpty())
            UpdateStudentDialog->setObjectName("UpdateStudentDialog");
        UpdateStudentDialog->resize(1027, 1186);
        UpdateStudentDialog->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        frame = new QFrame(UpdateStudentDialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(330, 120, 391, 431));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 281, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 301, 16));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 290, 211, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 210, 181, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lineEdit_Roll = new QTextEdit(frame);
        lineEdit_Roll->setObjectName("lineEdit_Roll");
        lineEdit_Roll->setGeometry(QRect(50, 120, 271, 31));
        QFont font2;
        font2.setBold(true);
        lineEdit_Roll->setFont(font2);
        lineEdit_Roll->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        lineEdit_CGPA = new QTextEdit(frame);
        lineEdit_CGPA->setObjectName("lineEdit_CGPA");
        lineEdit_CGPA->setEnabled(false);
        lineEdit_CGPA->setGeometry(QRect(50, 310, 271, 31));
        lineEdit_CGPA->setFont(font2);
        lineEdit_CGPA->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        lineEdit_Name = new QTextEdit(frame);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setEnabled(false);
        lineEdit_Name->setGeometry(QRect(50, 230, 271, 31));
        lineEdit_Name->setFont(font2);
        lineEdit_Name->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 360, 101, 41));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_Update = new QPushButton(frame);
        pushButton_Update->setObjectName("pushButton_Update");
        pushButton_Update->setEnabled(false);
        pushButton_Update->setGeometry(QRect(220, 360, 101, 41));
        pushButton_Update->setFont(font);
        pushButton_Update->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_Search = new QPushButton(frame);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(250, 160, 71, 31));
        pushButton_Search->setFont(font1);
        pushButton_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(UpdateStudentDialog);

        QMetaObject::connectSlotsByName(UpdateStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateStudentDialog)
    {
        UpdateStudentDialog->setWindowTitle(QCoreApplication::translate("UpdateStudentDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UpdateStudentDialog", "Update Student Details", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateStudentDialog", "Enter Roll No to Search", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateStudentDialog", "Enter CGPA", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateStudentDialog", "Enter Name", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UpdateStudentDialog", "Cancel", nullptr));
        pushButton_Update->setText(QCoreApplication::translate("UpdateStudentDialog", "Update", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("UpdateStudentDialog", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateStudentDialog: public Ui_UpdateStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESTUDENTDIALOG_H
