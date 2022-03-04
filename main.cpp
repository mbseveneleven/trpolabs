#include <QCoreApplication>
#include <iostream>
#include "stack.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack<int> st;

    for (int i = 0; i < 5; i++){
        st.Push(i);
    }

    return a.exec();
}
