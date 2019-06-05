#ifndef INVALIDMESSAGEEXEPTION_H
#define INVALIDMESSAGEEXEPTION_H

#include <stdexcept>


class invalidMessageExeption : public std::runtime_error
{
public:
    invalidMessageExeption() : runtime_error("Invalid Message Recieved"){}

};

#endif // INVALIDMESSAGEEXEPTION_H
