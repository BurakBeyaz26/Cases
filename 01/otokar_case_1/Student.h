#pragma once

#include "Person.h"

#define MARKS_LENGTH 6

class Student : public Person
{
public:
	Student();
	~Student();

    void getdata();
    void putdata();

private:
    vector<Student> student_store;

    int marks[MARKS_LENGTH] = {0};
    int sum_marks = 0;
    int cur_id;
    static int object_counter;

protected:
    bool checkConstraints();
    void cleardata();

};

