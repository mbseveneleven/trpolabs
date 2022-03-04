#include <QCoreApplication>
#include <iostream>
#include "stack.h"
#include "excep.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Stack<int> st;
    int temp = 0;
    int counter1, counter2;
    cout << temp << endl;

    //тест Push
    for (int i = 0; i < 3; i++){
        st.Push(i);
    }

    //тест Count
    counter1 = st.Count();

    //тест Pop
    temp = st.Pop();
    cout << temp << endl;

    counter2 = st.Count();

    cout << counter1 << " " << counter2 << endl;

    //обработка исключений
    try{
        st.Pop();
        st.Pop();
        st.Pop();
        st.Pop();
    }

    catch(const exc::EStackEmpty& e){
        cerr << e.what() << endl;
    }

    return a.exec();
}
