#ifndef STUDENTDATA_H
#define STUDENTDATA_H

#include <QString>
#include <QList>

// Ek Student ka structure (Blue print)
struct Student {
    QString name;
    QString rollNo; // Roll no string rakhte hain taake search asaan ho
    QString cgpa;
};

// Ye list "extern" hai, yani ye pure project mein ek hi rahegi
extern QList<Student> globalStudentList;

#endif // STUDENTDATA_H
