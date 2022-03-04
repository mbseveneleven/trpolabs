#ifndef EXCEP_H
#define EXCEP_H

namespace exc {

#include <string.h>

class EStackException
{
private:
    char* message;
public:
    EStackException(char* arg_message) //здесь удален const, чтобы можно было message = arg_message
    {
        message = new char[strlen(arg_message)+1];
        message = arg_message;
        //на это выражение qt ругается
        //strcpy(message,arg_message);
    }

    ~EStackException()
    {
        delete message;
    }

    const char* what() const { return message; }
};

class EStackEmpty : public EStackException
{
public:
    //здесь перед char так же удален const, чтобы все работало
    explicit EStackEmpty(char* arg) :  EStackException(arg) {}
};

}


#endif // EXCEP_H
