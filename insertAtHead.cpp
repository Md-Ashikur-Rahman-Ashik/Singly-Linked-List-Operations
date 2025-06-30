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

void insertAtHead(Node *&head, int integerValue)
{
    Node *newNode = new Node(integerValue);
    newNode->nextPointer = head;
    head = newNode;
}

void printLinkedList(Node *&head)
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
    Node *thirdNode = new Node(30);

    head->nextPointer = secondNode;
    secondNode->nextPointer = thirdNode;

    insertAtHead(head, 100);
    insertAtHead(head, 200);
    insertAtHead(head, 300);
    printLinkedList(head);

    return 0;
}