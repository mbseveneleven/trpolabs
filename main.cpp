#include <QCoreApplication>
#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack<int> st;
    int temp = 0;
    int counter1, counter2;
    cout << temp << endl;

    for (int i = 0; i < 5; i++){
        st.Push(i);
    }

    counter1 = st.Count();

    temp = st.Pop();
    cout << temp << endl;

    counter2 = st.Count();

    cout << counter1 << " " << counter2 << endl;
    return a.exec();
}
