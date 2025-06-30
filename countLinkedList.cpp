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

int countSize(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->nextPointer;
    }

    return count;
}

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    Node *head = new Node(num1);
    Node *secondNode = new Node(num2);
    Node *thirdNode = new Node(num3);

    head->nextPointer = secondNode;
    secondNode->nextPointer = thirdNode;

    int result = countSize(head);
    cout << result;

    return 0;
}