/********************************************************************************
** Form generated from reading UI file 'searchbynamedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYNAMEDIALOG_H
#define UI_SEARCHBYNAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchByNameDialog
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *frame_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_CGPA;
    QLineEdit *lineEdit_Roll;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *SearchByNameDialog)
    {
        if (SearchByNameDialog->objectName().isEmpty())
            SearchByNameDialog->setObjectName("SearchByNameDialog");
        SearchByNameDialog->resize(1068, 1342);
        SearchByNameDialog->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
"\n"
"QPushButton {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    border: 2px solid #8e24aa;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-weight: bold;\n"
"}"));
        frame = new QFrame(SearchByNameDialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(320, 110, 461, 471));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 40, 311, 41));
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
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 70, 111, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 150, 111, 16));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 110, 111, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lineEdit_Name = new QLineEdit(frame_2);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(70, 60, 241, 31));
        lineEdit_Name->setReadOnly(true);
        lineEdit_CGPA = new QLineEdit(frame_2);
        lineEdit_CGPA->setObjectName("lineEdit_CGPA");
        lineEdit_CGPA->setGeometry(QRect(70, 140, 241, 31));
        lineEdit_CGPA->setReadOnly(true);
        lineEdit_Roll = new QLineEdit(frame_2);
        lineEdit_Roll->setObjectName("lineEdit_Roll");
        lineEdit_Roll->setGeometry(QRect(70, 100, 241, 31));
        lineEdit_Roll->setReadOnly(true);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 430, 71, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 170, 71, 31));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(62, 129, 331, 31));

        retranslateUi(SearchByNameDialog);

        QMetaObject::connectSlotsByName(SearchByNameDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchByNameDialog)
    {
        SearchByNameDialog->setWindowTitle(QCoreApplication::translate("SearchByNameDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchByNameDialog", "Search Student By Name", nullptr));
        label_2->setText(QCoreApplication::translate("SearchByNameDialog", "Enter  Student Name", nullptr));
        label_5->setText(QCoreApplication::translate("SearchByNameDialog", "Information", nullptr));
        label_6->setText(QCoreApplication::translate("SearchByNameDialog", "Name", nullptr));
        label_7->setText(QCoreApplication::translate("SearchByNameDialog", "CGPA", nullptr));
        label_8->setText(QCoreApplication::translate("SearchByNameDialog", "Roll No", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SearchByNameDialog", "Close", nullptr));
        pushButton->setText(QCoreApplication::translate("SearchByNameDialog", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchByNameDialog: public Ui_SearchByNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYNAMEDIALOG_H
