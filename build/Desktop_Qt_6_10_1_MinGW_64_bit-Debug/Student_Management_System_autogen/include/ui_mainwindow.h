/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Student;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1867, 868);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("/* 1. Main Background */\n"
"QMainWindow, QWidget {\n"
"    background-color: #1f1f1f;\n"
"}\n"
"\n"
"/* 2. Heading Style (Neon Purple + Underline) */\n"
"QLabel {\n"
"    color: #e0b0ff; /* Neon Purple */\n"
"    font-size: 36px;\n"
"    font-weight: bold;\n"
"    font-family: \"Segoe UI Black\", \"Arial\";\n"
"    qproperty-alignment: AlignCenter;\n"
"    \n"
"    padding-bottom: 15px;\n"
"    border-bottom: 4px solid #8e44ad; /* Purple Line */\n"
"    margin-bottom: 30px;\n"
"}\n"
"\n"
"/* 3. General Buttons Design (Exit button bhi yahi style lega) */\n"
"QPushButton {\n"
"    background-color: #000000;  /* Pitch Black */\n"
"    color: white;               /* White Text */\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"    border: 2px solid #9b59b6;  /* Purple Border */\n"
"    border-radius: 12px;        /* Gol Konay */\n"
"    padding: 10px;              \n"
"    \n"
"    /* Size Settings */\n"
"    min-width: 200px;\n"
"    max-width: 300px;\n"
"    min-height: 45px;\n"
"    \n"
"    margin: 5p"
                        "x;\n"
"}\n"
"\n"
"/* 4. Hover Effect (Sab buttons par same chalega) */\n"
"QPushButton:hover {\n"
"    background-color: #8e44ad; /* Purple Glow */\n"
"    border: 2px solid white;\n"
"    color: white;\n"
"}\n"
"\n"
"/* 5. Pressed Effect */\n"
"/* 5. Pressed Effect (Dabanay par) */\n"
"QPushButton:pressed {\n"
"    background-color: #5b2c6f; /* Thora aur Dark Purple */\n"
"    border: 2px solid #8e44ad; /* Border color change */\n"
"    /* transform: scale(0.98);  <-- Ye line mita di kyunki Qt support nahi karta */\n"
"    padding-top: 12px; /* Juggad: Padding barha di taake button dabta hua feel ho */\n"
"    padding-bottom: 8px;\n"
"}\n"
"\n"
"/* 6. Exit Button Spacing (Sirf faasla rakha hai, rang normal hai) */\n"
"QPushButton#pushButton_Exit {\n"
"    margin-top: 20px; /* Thora neechay taake alag dikhe */\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Student = new QLabel(centralwidget);
        Student->setObjectName("Student");
        Student->setGeometry(QRect(160, 70, 911, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setBold(true);
        Student->setFont(font);
        Student->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 190, 234, 79));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 280, 234, 79));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 370, 234, 79));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(500, 190, 234, 79));
        pushButton_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(500, 280, 234, 79));
        pushButton_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(500, 370, 234, 79));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(750, 190, 234, 79));
        pushButton_7->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(750, 280, 234, 79));
        pushButton_8->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_Delete = new QPushButton(centralwidget);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(750, 370, 234, 79));
        pushButton_Delete->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName("pushButton_Exit");
        pushButton_Exit->setGeometry(QRect(500, 450, 234, 94));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1867, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Student->setText(QCoreApplication::translate("MainWindow", "Student Record Management System ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Students", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Search Student By Name", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Sort By Roll No", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Display Students", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Search Student By Roll No", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Mark Attendance", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Update Students", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Search Student By CGPA", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("MainWindow", "Delete Student", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
