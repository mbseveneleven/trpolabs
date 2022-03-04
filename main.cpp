#include <QCoreApplication>
#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack<int> st;
    int temp = 0;
    cout << temp << endl;
    for (int i = 0; i < 5; i++){
        st.Push(i);
    }

    temp = st.Pop();
    cout << temp << endl;
    return a.exec();
}
