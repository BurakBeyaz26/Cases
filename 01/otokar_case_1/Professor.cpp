#include "Professor.h"

int Professor::object_counter = 0;
Professor::Professor()
{
    object_counter++;                   // Holds the number of total objects created.
    cur_id = object_counter;            // Holds the number of current objects created.
}
Professor::~Professor()
{
    object_counter--;
}
void Professor::getdata()
{
    try
    {
        cin >> this->name >> this->age >> this->publications;
        if(checkConstraints() == true)
            professor_store.push_back(*this);
    }
    catch(ErrorException &e)
    {
        cout << e.what() << endl;
        cout << ErrorException::WARNING_TryAgain << endl;
        getdata();                      // When incorrect data is entered, the user is prompted to re-enter the data.
    }
}
void Professor::putdata()
{
    try
    {
        auto iter = professor_store.begin();
        while(iter != professor_store.end())
        {
            cout << iter->name << "\t" << iter->age << "\t" << iter->publications << "\t" << iter->cur_id << endl;
            *iter++;
        }
    }
    catch(exception &e)
    {
        cout << e.what() << endl;
    }
}
bool Professor::checkConstraints()      // Throws an error when it violates the constraints.
{
    bool result = true;

    if(this->name.size()>=1);
    else{result = false; throw ErrorException(ErrorException::ERROR_NameSize);}
    if(this->age <= 80 && this->age >= 1);
    else{result = false; throw ErrorException(ErrorException::ERROR_AgeSize);}
    if(this->publications <= 1000 && this->publications > 0);
    else{result = false; throw ErrorException(ErrorException::ERROR_PublicationsSize);}

    return result;
}
