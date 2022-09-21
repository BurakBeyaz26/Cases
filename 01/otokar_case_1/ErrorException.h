#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>
#include <string>

using namespace std;

class ErrorException : public std::exception
{

public:
    ErrorException(string msg);
    string what();

    static constexpr const char* ERROR_NameSize         =   "Name size must be bigger than 1";
    static constexpr const char* ERROR_AgeSize          =   "Age range must be between 80 and 1";
    static constexpr const char* ERROR_MarksSize        =   "Marks range from 0 to 100";
    static constexpr const char* ERROR_PublicationsSize =   "Publications cannot be greater than 1000 and less than 1";

    static constexpr const char* WARNING_TryAgain       =   "Enter the informations again";


private:
    string message;
};

#endif // EXCEPTION_H
