#ifndef STUDENTDATA_H
#define STUDENTDATA_H

#include <QString>
#include <QList>

struct Student {
    QString name;
    QString rollNo;
    QString cgpa;
};

extern QList<Student> globalStudentList;

#endif
