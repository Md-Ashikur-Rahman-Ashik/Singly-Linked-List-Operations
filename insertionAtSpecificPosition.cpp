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

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int num4;
    cin >> num4;

    Node *head = new Node(num1);
    Node *secondNode = new Node(num2);
    Node *tail = new Node(num3);

    return 0;
}