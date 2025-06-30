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
    Node *thirdNode = new Node(30);

    head->nextPointer = secondNode;
    secondNode->nextPointer = thirdNode;

    
    printLinkedList(head);

    return 0;
}