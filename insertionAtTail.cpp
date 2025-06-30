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
        head = newNode;
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
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int num4;
    cin >> num4;

    Node *head = new Node(num1);
    Node *secondNode = new Node(num2);
    Node *tail = new Node(num3);

    head->nextPointer = secondNode;
    secondNode->nextPointer = tail;

    insertAtTail(head, num4, tail);
    printLinkedList(head);

    return 0;
}