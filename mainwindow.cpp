#include "displaystudentdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "markattendancedialog.h"
#include "searchbyrolldialog.h"
#include "searchbycgpadialog.h"
#include <QMessageBox>
#include "sortbyrolldialog.h"
#include "deletestudentdialog.h"

#include "addstudentdialog.h"
#include "updatestudentdialog.h"
#include "searchbynamedialog.h"


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
void MainWindow::on_pushButton_clicked()
{
    AddStudentDialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    SearchByNameDialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    UpdateStudentDialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    SortByRollDialog sortWindow;
    sortWindow.setModal(true);
    sortWindow.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    DisplayStudentDialog displayWindow;
    displayWindow.setModal(true);
    displayWindow.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    SearchByRollDialog searchWindow;
    searchWindow.setModal(true);
    searchWindow.exec();
}

void MainWindow::on_pushButton_8_clicked()
{

    QMessageBox msgBox;
    msgBox.setWindowTitle("Search Mode");
    msgBox.setText("Select Search Type:");

    msgBox.setStyleSheet("background-color: #333333; color: white;");

    QAbstractButton* btnExact = msgBox.addButton("Exact CGPA", QMessageBox::YesRole);
    QAbstractButton* btnRange = msgBox.addButton("CGPA Range", QMessageBox::NoRole);

    msgBox.exec();

    SearchByCgpaDialog cgpaWindow;

    if(msgBox.clickedButton() == btnRange)
    {
        cgpaWindow.setMode(true);
    }
    else
    {
        cgpaWindow.setMode(false);
    }

    cgpaWindow.setModal(true);
    cgpaWindow.exec();
}

void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}

void MainWindow::on_pushButton_6_clicked()
{
    MarkAttendanceDialog attWindow;
    attWindow.setModal(true);
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

