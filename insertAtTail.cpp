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

void insertAtTail(Node *&head, int integerValue)
{
    Node *newNode = new Node(integerValue);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tmp = head;
        while (tmp->nextPointer != NULL)
        {
            tmp = tmp->nextPointer;
        }

        tmp->nextPointer = newNode;
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
    // Node *head = new Node(10);
    Node *head = NULL;
    // Node *secondNode = new Node(20);
    // Node *thirdNode = new Node(30);

    // head->nextPointer = secondNode;
    // secondNode->nextPointer = thirdNode;

    insertAtTail(head, 100);
    printLinkedList(head);

    return 0;
}