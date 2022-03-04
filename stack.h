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
        //cout << "Po adresy = " << p << " " << "peredaetsya value = " << value << " staraya golova = " << p->next << endl;
    }

    T Pop()
    {
        if (top == nullptr){
            return -1;
        }

        Node<T> *temp;
        T tempvalue;
        tempvalue = top->value;

        temp = top;
        top = top->next;
        //cout << "po adresy = " << temp << " " << "vivoditsya value = " << tempvalue << " novaya golova = " << top << endl;

        delete temp;
        return tempvalue;
    }
};

#endif // STACK_H
