/*
 * created by       : Burak Beyaz
 * created date     : 08.18.2022
 * updated date     : 08.18.2022
 * version          : 1.0
 *
*/

#pragma once

#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

#include "ErrorException.h"

using namespace std;
class Person
{
public:
	Person(){}
	~Person(){}

    virtual void getdata() = 0;
    virtual void putdata() = 0;

protected:
    int age;
    string name;

};

