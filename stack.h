#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "excep.h"

using namespace std;

//в качестве узла стека используем структуру с 2мя данными:содержмимым и указателем на следующий узел
template<typename T>
struct Node
{
    T value;
    Node<T> *next;
};

//класс стек
template<typename T>
class Stack
{
private:
    Node<T> *top;
public:
    Stack() { top = nullptr; }

    //метод Push добавляет узел в стек и делает его головным
    void Push(T value)
    {
        //выделяем память для узла
        Node<T> *p;
        p = new Node<T>;
        //передает наше значение в узел, а в указатель на след. узел передаем текущую голову
        p->value = value;
        p->next = top;
        //новая голова текущий узел
        top = p;
        //следующая строчка использовалась для тестов
        //cout << "Po adresy = " << p << " " << "peredaetsya value = " << value << " staraya golova = " << p->next << endl;
    }

    //метод Pop возвращает содержимое головы, при этом удаляет сам узел
    T Pop()
    {
        //если стек пут создаем исключение
        if (top == nullptr){
            throw exc::EStackEmpty("Stack empty!");
        }
        //иначе
        Node<T> *temp;
        T tempvalue;
        tempvalue = top->value;

        temp = top;
        top = top->next;
        //следующая строчка использовалась для тестов
        //cout << "po adresy = " << temp << " " << "vivoditsya value = " << tempvalue << " novaya golova = " << top << endl;

        delete temp;
        temp = nullptr;
        return tempvalue;
    }

    //метод Count возвращает кол-во узлов в стеке
    int Count()
    {
        if (top == nullptr){
            return 0;
        }
        else{
            Node<T> *temp = top;
            int counter = 0;

            while (temp != nullptr){
                counter++;
                temp = temp->next;
            }
            return counter;
        }
    }

    ~Stack()
    {
        while( top != nullptr){
            Pop();
        }
    }
};

#endif // STACK_H
