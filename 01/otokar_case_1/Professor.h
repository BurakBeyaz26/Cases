#pragma once
#include "Person.h"

class Professor : public Person
{
public:
	Professor();
	~Professor();

    void getdata();
    void putdata();

private:
    vector<Professor> professor_store;
    int publications;
    int cur_id;
    static int object_counter;
protected:
    bool checkConstraints();

};
