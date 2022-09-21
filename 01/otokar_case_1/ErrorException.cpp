#include "ErrorException.h"

ErrorException::ErrorException(string msg) : message(msg) {}

string ErrorException::what()
{
    return message.c_str();
}
