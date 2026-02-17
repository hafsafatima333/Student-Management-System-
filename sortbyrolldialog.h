#ifndef SORTBYROLLDIALOG_H
#define SORTBYROLLDIALOG_H

#include <QDialog>

namespace Ui {
class SortByRollDialog;
}

class SortByRollDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SortByRollDialog(QWidget *parent = nullptr);
    ~SortByRollDialog();

private slots:
    void on_pushButton_Sort_clicked();
    void on_pushButton_Close_clicked();

    void on_SortByRollDialog_accepted();

private:
    Ui::SortByRollDialog *ui;
};

#endif
