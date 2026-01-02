// #include "linkedlist.h"

// Linkedlist::Linkedlist() {}
#include "linkedlist.h"



// Global List ko yahan asal mein banayenge
StudentList globalLinkedList;

StudentList::StudentList()
{
    head = nullptr;
}

// --- INSERT FUNCTION ---
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

// --- CHECK ROLL NO ---
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

// --- SEARCH BY NAME ---
Node* StudentList::searchByName(QString n)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        // Case insensitive comparison
        if (temp->name.compare(n, Qt::CaseInsensitive) == 0)
        {
            return temp; // Pura Node wapis bhej do
        }
        temp = temp->next;
    }
    return nullptr; // Agar nahi mila
}

// --- SEARCH BY ROLL ---
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

// --- COUNT STUDENTS ---
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

// --- DELETE STUDENT FUNCTION ---
bool StudentList::deleteStudent(int r)
{
    // Case 1: List khali hai
    if (head == nullptr) return false;

    // Case 2: Agar Pehla (Head) hi delete karna hai
    if (head->rollNo == r) {
        Node* temp = head;
        head = head->next; // Head ko agay barha do
        delete temp;       // Purana head uda do
        return true;
    }

    // Case 3: Beech mein ya End mein dhoondo
    Node* current = head;
    while (current->next != nullptr) {
        // Agar aglay walay ka roll number match ho jaye
        if (current->next->rollNo == r) {
            Node* temp = current->next;
            current->next = temp->next; // Link skip kar do
            delete temp;                // Delete kar do
            return true;
        }
        current = current->next;
    }

    // Agar yahan tak pohanch gaye matlab banda nahi mila
    return false;
}
