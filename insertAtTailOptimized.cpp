#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int integerValue;
    Node *nextPointer;

    Node(int integerValue)
    {
        this->integerValue = integerValue;
        this->nextPointer = NULL;
    }
};

void insertAtTail(Node *&head, int integerValue, Node *&tail)
{
    Node *newNode = new Node(integerValue);
    if (head == NULL)
    {
        head->nextPointer = newNode;
        tail = newNode;
    }
    else
    {
        tail->nextPointer = newNode;
        tail = newNode;
    }
}

void printLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->integerValue << endl;
        tmp = tmp->nextPointer;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *tail = new Node(20);

    head->nextPointer = tail;

    insertAtTail(head, 30, tail);
    printLinkedList(head);

    return 0;
}