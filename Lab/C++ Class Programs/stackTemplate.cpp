#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

template <class T>
class Stack
{
private:
    T arr[100];
    int top=-1;

public:
    void push(T i);
    T pop();
};

template <class T>
void Stack<T>::push(T i)
{
    top++;
    arr[top] = i;
}

template <class T>
T Stack<T>::pop()
{
    T temp = arr[top];
    top--;
    return temp;
}

int main()
{
    Stack<int> s;
    s.push(4);
    int c=s.pop();
    cout<<c;
    return 1;
}