#include "displaystudentdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "markattendancedialog.h"
#include "searchbyrolldialog.h"
#include "searchbycgpadialog.h" // Dialog kholne ke liye
#include <QMessageBox>          // Prompt (Sawal) puchne ke liye
#include "sortbyrolldialog.h"
#include "deletestudentdialog.h" // <--- Ye line add karo

// --- SAARI DIALOG FILES INCLUDE KAREIN ---
#include "addstudentdialog.h"
#include "updatestudentdialog.h"
#include "searchbynamedialog.h"

// Agar baqi files bhi ready hain to unhein uncomment kar dein:
// #include "displaystudentdialog.h"
// #include "searchbyrolldialog.h"
// #include "searchbycgpadialog.h"
// #include "sortbyrolldialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ==============================
//      BUTTON FUNCTIONS
// ==============================

// --- 1. ADD STUDENT (Button Name: pushButton) ---
void MainWindow::on_pushButton_clicked()
{
    AddStudentDialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

// --- 2. SEARCH BY NAME (Button Name: pushButton_2) ---
// (Yahan pehle ghalat Update khul raha tha, ab Search khulega)
void MainWindow::on_pushButton_2_clicked()
{
    SearchByNameDialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

// --- 3. UPDATE STUDENT (Button Name: pushButton_7) ---
// (Aapke purane code ke mutabiq Button 7 Update ka tha)
void MainWindow::on_pushButton_7_clicked()
{
    UpdateStudentDialog dialog;
    dialog.setModal(true);
    dialog.exec();
}


// ==============================
//    BAQI BUTTONS (Empty Slots)
// ==============================
// Inhein khali rakha hai taake errors na ayen.
// Jab aap inke Dialogs bana lein, to code uncomment kar dena.

// Sort By Roll No (Button 3)
void MainWindow::on_pushButton_3_clicked()
{
    SortByRollDialog sortWindow;
    sortWindow.setModal(true);
    sortWindow.exec();
}

// Display All (Button 4)
void MainWindow::on_pushButton_4_clicked()
{
    DisplayStudentDialog displayWindow;
    displayWindow.setModal(true);
    displayWindow.exec();
}

// Search By Roll No (Button 5)
void MainWindow::on_pushButton_5_clicked()
{
    SearchByRollDialog searchWindow;
    searchWindow.setModal(true);
    searchWindow.exec();
}

// Search By CGPA (Button 8)
void MainWindow::on_pushButton_8_clicked()
{
    // SearchByCgpaDialog dialog;
    // dialog.setModal(true);
    // dialog.exec();
    // 1. Prompt (Sawal) Banao
    QMessageBox msgBox;
    msgBox.setWindowTitle("Search Mode");
    msgBox.setText("Select Search Type:");

    // Styling (Optional: Dark Theme match karne ke liye)
    msgBox.setStyleSheet("background-color: #333333; color: white;");

    // 2. Buttons Add karo
    QAbstractButton* btnExact = msgBox.addButton("Exact CGPA", QMessageBox::YesRole);
    QAbstractButton* btnRange = msgBox.addButton("CGPA Range", QMessageBox::NoRole);

    // 3. Prompt Show karo
    msgBox.exec();

    // 4. Dialog ka variable banao
    SearchByCgpaDialog cgpaWindow;

    // 5. Check karo user ne kya select kiya
    if(msgBox.clickedButton() == btnRange)
    {
        cgpaWindow.setMode(true);  // Range Mode ON (Min/Max dikhao)
    }
    else
    {
        cgpaWindow.setMode(false); // Range Mode OFF (Exact dikhao)
    }

    // 6. Window Kholo
    cgpaWindow.setModal(true);
    cgpaWindow.exec();
}

void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}


// void MainWindow::on_pushButton_DisplayStudents_clicked() // (Naam shayad alag ho, tension nahi)
// {
//     DisplayStudentDialog displayWindow; // Window ka variable banaya
//     displayWindow.setModal(true);       // Isay main window ke upar rakho
//     displayWindow.exec();               // Window show karo
// }

void MainWindow::on_pushButton_6_clicked()
{
    MarkAttendanceDialog attWindow; // Nayi window ka variable
    attWindow.setModal(true);       // Isay main window ke upar lock karo
    attWindow.exec();
}


void MainWindow::on_pushButton_Delete_clicked()
{
    DeleteStudentDialog deletePage;
    deletePage.setModal(true);
    deletePage.exec();
}


void MainWindow::on_pushButton_Exit_clicked()
{
    QApplication::quit();
}

