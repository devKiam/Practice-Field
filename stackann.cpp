#include <iostream>

using namespace std;

#define SIZE 3

class stack
{
public:
    int stck[SIZE];
    int tos;
public:
    stack();
    void push(int x);
    int pop();
};

stack::stack()
{
    tos = 0;
}

void stack::push(int x)
{
    if (tos == SIZE)
    {
        cout << "Stack is full!" << endl;
        return;
    }
    stck[tos++] = x;
}

int stack::pop()
{
    if (tos == 0)
    {
        cout << "Stack is empty!" << endl;
        return  0;
    }
    return stck[--tos];
}

int main()
{
    stack s1, s2, s3;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << s1.pop() << endl;
    }
    cout << s1.pop();
    return 0;
}
