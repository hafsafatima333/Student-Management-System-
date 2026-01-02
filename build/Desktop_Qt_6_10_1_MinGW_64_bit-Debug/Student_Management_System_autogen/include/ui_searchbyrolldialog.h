/********************************************************************************
** Form generated from reading UI file 'searchbyrolldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYROLLDIALOG_H
#define UI_SEARCHBYROLLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchByRollDialog
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *frame_2;
    QLabel *label_5;
    QLabel *label_Name;
    QLabel *label_CGPA;
    QLabel *label_Attendance;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_CGPA;
    QLineEdit *lineEdit_Attendance;
    QPushButton *pushButton_Close;
    QPushButton *pushButton_Search;
    QLineEdit *lineEdit_Roll;

    void setupUi(QDialog *SearchByRollDialog)
    {
        if (SearchByRollDialog->objectName().isEmpty())
            SearchByRollDialog->setObjectName("SearchByRollDialog");
        SearchByRollDialog->resize(2463, 1027);
        SearchByRollDialog->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border: 1px solid #555555;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:readOnly {\n"
"    background-color: #222222; \n"
"    color: white; \n"
"    border: 1px solid #444444;\n"
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
        frame = new QFrame(SearchByRollDialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(440, 80, 461, 471));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 40, 311, 41));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 181, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(60, 210, 331, 20));
        line->setFont(font);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(60, 230, 331, 191));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 111, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_Name = new QLabel(frame_2);
        label_Name->setObjectName("label_Name");
        label_Name->setGeometry(QRect(10, 60, 111, 16));
        label_Name->setFont(font);
        label_Name->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_CGPA = new QLabel(frame_2);
        label_CGPA->setObjectName("label_CGPA");
        label_CGPA->setGeometry(QRect(10, 100, 111, 16));
        label_CGPA->setFont(font);
        label_CGPA->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_Attendance = new QLabel(frame_2);
        label_Attendance->setObjectName("label_Attendance");
        label_Attendance->setGeometry(QRect(10, 140, 131, 16));
        label_Attendance->setFont(font);
        label_Attendance->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lineEdit_Name = new QLineEdit(frame_2);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(70, 49, 241, 31));
        lineEdit_Name->setReadOnly(true);
        lineEdit_CGPA = new QLineEdit(frame_2);
        lineEdit_CGPA->setObjectName("lineEdit_CGPA");
        lineEdit_CGPA->setGeometry(QRect(70, 89, 241, 31));
        lineEdit_CGPA->setReadOnly(true);
        lineEdit_Attendance = new QLineEdit(frame_2);
        lineEdit_Attendance->setObjectName("lineEdit_Attendance");
        lineEdit_Attendance->setGeometry(QRect(90, 129, 221, 31));
        lineEdit_Attendance->setReadOnly(true);
        pushButton_Close = new QPushButton(frame);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setGeometry(QRect(320, 430, 71, 31));
        pushButton_Close->setFont(font);
        pushButton_Close->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_Search = new QPushButton(frame);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(320, 170, 71, 31));
        pushButton_Search->setFont(font);
        pushButton_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_Roll = new QLineEdit(frame);
        lineEdit_Roll->setObjectName("lineEdit_Roll");
        lineEdit_Roll->setGeometry(QRect(60, 130, 331, 31));

        retranslateUi(SearchByRollDialog);

        QMetaObject::connectSlotsByName(SearchByRollDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchByRollDialog)
    {
        SearchByRollDialog->setWindowTitle(QCoreApplication::translate("SearchByRollDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchByRollDialog", "Search Student By Roll No", nullptr));
        label_2->setText(QCoreApplication::translate("SearchByRollDialog", "Enter  Student Roll No", nullptr));
        label_5->setText(QCoreApplication::translate("SearchByRollDialog", "Information", nullptr));
        label_Name->setText(QCoreApplication::translate("SearchByRollDialog", "Name", nullptr));
        label_CGPA->setText(QCoreApplication::translate("SearchByRollDialog", "CGPA", nullptr));
        label_Attendance->setText(QCoreApplication::translate("SearchByRollDialog", "Attendance", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("SearchByRollDialog", "Close", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("SearchByRollDialog", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchByRollDialog: public Ui_SearchByRollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYROLLDIALOG_H
