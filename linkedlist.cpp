#include "linkedlist.h"
StudentList globalLinkedList;

StudentList::StudentList()
{
    head = nullptr;
}

void StudentList::insertStudent(QString n, int r, float c)
{
    Node *new_node = new Node(n, r, c);

    if (head == nullptr)
    {
        head = new_node;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

bool StudentList::isRollExist(int r)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->rollNo == r)
            return true;
        temp = temp->next;
    }
    return false;
}

Node* StudentList::searchByName(QString n)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->name.compare(n, Qt::CaseInsensitive) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

Node* StudentList::searchByRoll(int r)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->rollNo == r)
        {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

int StudentList::countStudents()
{
    int n = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        n++;
        temp = temp->next;
    }
    return n;
}

bool StudentList::deleteStudent(int r)
{
    if (head == nullptr) return false;

    if (head->rollNo == r) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }


    Node* current = head;
    while (current->next != nullptr) {

        if (current->next->rollNo == r) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
            return true;
        }
        current = current->next;
    }


    return false;
}
