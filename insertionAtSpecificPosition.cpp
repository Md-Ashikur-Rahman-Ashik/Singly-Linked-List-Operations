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

void insertAtAnyPosition(Node *&head, int desiredIndex, int integerValue)
{
    Node *newNode = new Node(integerValue);
    Node *tmp = head;
    for (int i = 1; i < desiredIndex; i++)
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
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int num4, num5;
    cin >> num4 >> num5;

    Node *head = new Node(num1);
    Node *secondNode = new Node(num2);
    Node *tail = new Node(num3);

    head->nextPointer = secondNode;
    secondNode->nextPointer = tail;

    insertAtAnyPosition(head, num4, num5);
    printLinkedList(head);

    return 0;
}