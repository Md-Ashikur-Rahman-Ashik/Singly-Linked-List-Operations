#include <bits/stdc++.h>
using namespace std;

void fun(int *&pointer)
{
    // cout << "Inside fun function " << *pointer << endl;
    // *pointer = 100;
    // int secondInteger = 200;
    // pointer = &secondInteger;
    // cout << "Address of pointer from fun function " << pointer << endl;
    pointer = NULL;
}

int main()
{
    int integerValue = 10;
    int *pointer = &integerValue;

    fun(pointer);
    // cout << "Inside main function " << *pointer << endl;
    // cout << integerValue << endl;

    cout << "Address of pointer from main function " << pointer << endl;

    return 0;
}