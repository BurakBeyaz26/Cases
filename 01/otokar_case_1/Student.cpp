#include "Student.h"

int Student::object_counter = 0;
Student::Student()
{
    object_counter++;                          // Holds the number of total objects created.
    cur_id = object_counter;                   // Holds the number of current objects created.
}
Student::~Student()
{
    object_counter--;
}
void Student::getdata()
{
    try
    {
        cin >> this->name >> this->age && std::copy_n(std::istream_iterator<int>(cin), MARKS_LENGTH, this->marks);

        if(checkConstraints() == true)
        {
            for(int i=0;i<MARKS_LENGTH;i++)     // Total value of the grades entered is calculated.
            {
                this->sum_marks += this->marks[i];
            }
            student_store.push_back(*this);
        }
    }
    catch(ErrorException &e)
    {
        cout << e.what() << endl;
        cout << ErrorException::WARNING_TryAgain << endl;
        getdata();                              // When incorrect data is entered, the user is prompted to re-enter the data.
    }
}
void Student::putdata()
{
    try
    {
        auto iter = student_store.begin();
        while(iter != student_store.end())
        {
            cout << iter->name << "\t" << iter->age << "\t" << iter->sum_marks << "\t" << iter->cur_id << endl;
            *iter++;
        }
    }
    catch(exception &e)
    {
        cout << e.what() << endl;
    }
}

bool Student::checkConstraints()                // Throws an error when it violates the constraints.
{
    bool result = true;

    if(this->name.size()>=1);
    else{result = false; throw ErrorException(ErrorException::ERROR_NameSize);}
    if(this->age <= 80 && this->age > 1);
    else{result = false;  throw ErrorException(ErrorException::ERROR_AgeSize);}

    for(int i=0;i<MARKS_LENGTH;i++)
    {
        if(this->marks[i] <= 100 && this->marks[i] >= 0);
        else{result = false; throw ErrorException(ErrorException::ERROR_MarksSize);break;}
    }

    return result;
}
