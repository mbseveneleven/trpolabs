#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

template<typename T>
struct Node
{
    T value;
    Node<T> *next;
};

template<typename T>
class Stack
{
private:
    Node<T> *top;
public:
    Stack() { top = nullptr; }

    void Push(T value)
    {
        Node<T> *p;
        p = new Node<T>;
        p->value = value;
        p->next = top;
        top = p;
        cout << "Po adresy = " << p << " " << "peredaetsya value = " << value << " staraya golova = " << p->next << endl;
    }
};

#endif // STACK_H
