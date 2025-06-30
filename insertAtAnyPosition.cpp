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

void insertAtAnyPosition(Node *&head, int index, int integerValue)
{
    Node *newNode = new Node(integerValue);
    Node *tmp = head;

    for (int i = 1; i < index; i++)
    {
        tmp = tmp->nextPointer;
    }

    newNode->nextPointer = tmp->nextPointer;
    tmp->nextPointer = newNode;
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
    Node *secondNode = new Node(20);

    head->nextPointer = secondNode;

    insertAtAnyPosition(head, 1, 100);
    printLinkedList(head);

    return 0;
}