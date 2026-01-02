// #ifndef LINKEDLIST_H
// #define LINKEDLIST_H

// class Linkedlist
// {
// public:
//     Linkedlist();
// };

// #endif // LINKEDLIST_H


#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <QString>

class Node
{
public:
    QString name;
    int rollNo;
    float cgpa;
    float attendance;           // Overall Percentage
    int weeklyAttendance[8][3]; // 8 Hafte, 3 Din (Mon, Tue, Wed)
    Node* next;

    Node(QString n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
        attendance = 0.0;
        next = nullptr;

        // --- NEW: Shuru mein sabko -1 (Not Marked) set karo ---
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 3; j++) {
                weeklyAttendance[i][j] = -1;
            }
        }
    }
};
// --- LINKED LIST CLASS ---
class StudentList
{
public:
    Node *head;

    StudentList(); // Constructor
    bool deleteStudent(int r); // Returns true agar delete hogya, false agar nahi mila
    // Functions ab values return karenge, print nahi karenge
    void insertStudent(QString n, int r, float c);
    bool isRollExist(int r);
    Node* searchByName(QString n); // Node wapis karega taake UI pe dikha sakein
    Node* searchByRoll(int r);
    int countStudents();
};

// Global Object (Taake pure project mein ek hi list rahe)
extern StudentList globalLinkedList;

#endif // LINKEDLIST_H
