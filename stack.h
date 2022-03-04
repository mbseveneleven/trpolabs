#ifndef STACK_H
#define STACK_H
#include <iostream>

template<typename T>
struct Node
{
    T value;
    Node<T> *next;
};

template< typename T>
class Stack
{
private:
    Node<T> *top;
public:
    Stack() { top = nullptr; }
};

#endif // STACK_H
