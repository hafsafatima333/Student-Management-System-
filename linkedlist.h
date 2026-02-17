#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <QString>

class Node
{
public:
    QString name;
    int rollNo;
    float cgpa;
    float attendance;
    int weeklyAttendance[8][3];
    Node* next;

    Node(QString n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
        attendance = 0.0;
        next = nullptr;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 3; j++) {
                weeklyAttendance[i][j] = -1;
            }
        }
    }
};
class StudentList
{
public:
    Node *head;

    StudentList();
    bool deleteStudent(int r);
    void insertStudent(QString n, int r, float c);
    bool isRollExist(int r);
    Node* searchByName(QString n);
    Node* searchByRoll(int r);
    int countStudents();
};

extern StudentList globalLinkedList;

#endif








