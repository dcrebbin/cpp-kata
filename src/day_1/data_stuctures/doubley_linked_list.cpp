#include <algorithm>

struct Node
{
    Node *next;
    Node *previous;
    int value;
};

struct DoublyLinkedList
{
    int length;
    Node *head;
    Node *tail;

    DoublyLinkedList(){
        length = 0;
        head = NULL;
        tail = NULL;
    }

    void insertAt(Node *item, int idx)
    {
    }
    void remove(Node *item, int idx)
    {
    }
    void get(int idx)
    {
    }
    void append(Node *item, int idx)
    {
    }
};