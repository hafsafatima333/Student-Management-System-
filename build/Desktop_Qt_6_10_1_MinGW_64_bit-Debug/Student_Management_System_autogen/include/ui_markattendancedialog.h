/********************************************************************************
** Form generated from reading UI file 'markattendancedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKATTENDANCEDIALOG_H
#define UI_MARKATTENDANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MarkAttendanceDialog
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *frame_2;
    QLabel *label_5;
    QLabel *label_Name;
    QLabel *label_CurrentAtt;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_CurrentAtt;
    QPushButton *pushButton_Search;
    QLineEdit *lineEdit_Roll;
    QFrame *frame_3;
    QLabel *label_6;
    QComboBox *comboBox_Week;
    QComboBox *comboBox_Day;
    QComboBox *comboBox_Status;
    QPushButton *pushButton_Mark;
    QPushButton *pushButton_Close;

    void setupUi(QDialog *MarkAttendanceDialog)
    {
        if (MarkAttendanceDialog->objectName().isEmpty())
            MarkAttendanceDialog->setObjectName("MarkAttendanceDialog");
        MarkAttendanceDialog->resize(2536, 1371);
        MarkAttendanceDialog->setStyleSheet(QString::fromUtf8("/* Pure Dialog ka background dark */\n"
"QDialog { \n"
"    background-color: #1f1f1f; \n"
"    color: white; \n"
"}\n"
"\n"
"/* Labels (Naam waghera) white */\n"
"QLabel { \n"
"    color: white; \n"
"    font-weight: bold; \n"
"    font-size: 13px; \n"
"}\n"
"\n"
"/* Input Boxes */\n"
"QLineEdit { \n"
"    background-color: #2b2b2b; \n"
"    color: white; \n"
"    border: 1px solid #555555; \n"
"    padding: 4px; \n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"/* Group Boxes (Dabbe) */\n"
"QGroupBox { \n"
"    border: 1px solid #555555; \n"
"    border-radius: 5px; \n"
"    margin-top: 10px; \n"
"    color: white; \n"
"    font-weight: bold; \n"
"}\n"
"QGroupBox::title { \n"
"    subcontrol-origin: margin; \n"
"    left: 10px; \n"
"    padding: 0 3px; \n"
"}\n"
"\n"
"/* Buttons - Purple Theme */\n"
"QPushButton { \n"
"    background-color: #2b2b2b; \n"
"    color: white; \n"
"    border: 2px solid #8e44ad; \n"
"    border-radius: 5px; \n"
"    padding: 5px 10px; \n"
"    font-weight: bold; \n"
"}\n"
"QPushButton:"
                        "hover { \n"
"    background-color: #8e44ad; \n"
"}\n"
"\n"
"/* Dropdown Menus */\n"
"QComboBox { \n"
"    background-color: #2b2b2b; \n"
"    color: white; \n"
"    border: 1px solid #555555; \n"
"    padding: 3px; \n"
"}\n"
"QComboBox QAbstractItemView { \n"
"    background-color: #2b2b2b; \n"
"    color: white; \n"
"    selection-background-color: #8e44ad; \n"
"}"));
        frame = new QFrame(MarkAttendanceDialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(420, 80, 461, 541));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 20, 311, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"color: white;\n"
"margin-bottom: 10px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 70, 181, 16));
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(60, 170, 331, 20));
        line->setFont(font1);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(60, 190, 331, 141));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 111, 16));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_Name = new QLabel(frame_2);
        label_Name->setObjectName("label_Name");
        label_Name->setGeometry(QRect(10, 50, 111, 16));
        label_Name->setFont(font1);
        label_Name->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_CurrentAtt = new QLabel(frame_2);
        label_CurrentAtt->setObjectName("label_CurrentAtt");
        label_CurrentAtt->setGeometry(QRect(10, 100, 141, 16));
        label_CurrentAtt->setFont(font1);
        label_CurrentAtt->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lineEdit_Name = new QLineEdit(frame_2);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(60, 40, 261, 39));
        lineEdit_Name->setReadOnly(true);
        lineEdit_CurrentAtt = new QLineEdit(frame_2);
        lineEdit_CurrentAtt->setObjectName("lineEdit_CurrentAtt");
        lineEdit_CurrentAtt->setGeometry(QRect(150, 90, 171, 39));
        lineEdit_CurrentAtt->setReadOnly(true);
        pushButton_Search = new QPushButton(frame);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(290, 140, 101, 31));
        pushButton_Search->setFont(font1);
        pushButton_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_Roll = new QLineEdit(frame);
        lineEdit_Roll->setObjectName("lineEdit_Roll");
        lineEdit_Roll->setGeometry(QRect(60, 90, 331, 39));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(60, 340, 331, 141));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 111, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        comboBox_Week = new QComboBox(frame_3);
        comboBox_Week->addItem(QString());
        comboBox_Week->addItem(QString());
        comboBox_Week->addItem(QString());
        comboBox_Week->addItem(QString());
        comboBox_Week->addItem(QString());
        comboBox_Week->addItem(QString());
        comboBox_Week->addItem(QString());
        comboBox_Week->setObjectName("comboBox_Week");
        comboBox_Week->setGeometry(QRect(30, 50, 72, 37));
        comboBox_Day = new QComboBox(frame_3);
        comboBox_Day->addItem(QString());
        comboBox_Day->addItem(QString());
        comboBox_Day->addItem(QString());
        comboBox_Day->setObjectName("comboBox_Day");
        comboBox_Day->setGeometry(QRect(130, 50, 81, 37));
        comboBox_Status = new QComboBox(frame_3);
        comboBox_Status->addItem(QString());
        comboBox_Status->addItem(QString());
        comboBox_Status->setObjectName("comboBox_Status");
        comboBox_Status->setGeometry(QRect(230, 50, 81, 37));
        pushButton_Mark = new QPushButton(frame_3);
        pushButton_Mark->setObjectName("pushButton_Mark");
        pushButton_Mark->setGeometry(QRect(160, 100, 151, 31));
        pushButton_Close = new QPushButton(frame);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setGeometry(QRect(320, 490, 71, 31));
        pushButton_Close->setFont(font1);
        pushButton_Close->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(MarkAttendanceDialog);

        QMetaObject::connectSlotsByName(MarkAttendanceDialog);
    } // setupUi

    void retranslateUi(QDialog *MarkAttendanceDialog)
    {
        MarkAttendanceDialog->setWindowTitle(QCoreApplication::translate("MarkAttendanceDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MarkAttendanceDialog", "Mark Attendance", nullptr));
        label_2->setText(QCoreApplication::translate("MarkAttendanceDialog", "Enter  Student Roll No", nullptr));
        label_5->setText(QCoreApplication::translate("MarkAttendanceDialog", "Information", nullptr));
        label_Name->setText(QCoreApplication::translate("MarkAttendanceDialog", "Name", nullptr));
        label_CurrentAtt->setText(QCoreApplication::translate("MarkAttendanceDialog", "Current Attendance", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("MarkAttendanceDialog", "Search", nullptr));
        label_6->setText(QCoreApplication::translate("MarkAttendanceDialog", "Marking Section", nullptr));
        comboBox_Week->setItemText(0, QCoreApplication::translate("MarkAttendanceDialog", "Week 1", nullptr));
        comboBox_Week->setItemText(1, QCoreApplication::translate("MarkAttendanceDialog", "Week 2", nullptr));
        comboBox_Week->setItemText(2, QCoreApplication::translate("MarkAttendanceDialog", "Week 3", nullptr));
        comboBox_Week->setItemText(3, QCoreApplication::translate("MarkAttendanceDialog", "Week 4", nullptr));
        comboBox_Week->setItemText(4, QCoreApplication::translate("MarkAttendanceDialog", "Week 5", nullptr));
        comboBox_Week->setItemText(5, QCoreApplication::translate("MarkAttendanceDialog", "Week 7", nullptr));
        comboBox_Week->setItemText(6, QCoreApplication::translate("MarkAttendanceDialog", "Week 8", nullptr));

        comboBox_Day->setItemText(0, QCoreApplication::translate("MarkAttendanceDialog", "Mon", nullptr));
        comboBox_Day->setItemText(1, QCoreApplication::translate("MarkAttendanceDialog", "Tues", nullptr));
        comboBox_Day->setItemText(2, QCoreApplication::translate("MarkAttendanceDialog", "Wed", nullptr));

        comboBox_Status->setItemText(0, QCoreApplication::translate("MarkAttendanceDialog", "Present", nullptr));
        comboBox_Status->setItemText(1, QCoreApplication::translate("MarkAttendanceDialog", "Absent", nullptr));

        pushButton_Mark->setText(QCoreApplication::translate("MarkAttendanceDialog", "Mark Attendance", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("MarkAttendanceDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkAttendanceDialog: public Ui_MarkAttendanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKATTENDANCEDIALOG_H
