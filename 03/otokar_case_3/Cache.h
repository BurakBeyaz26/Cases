#ifndef CACHE_H
#define CACHE_H

#include <iostream>
#include <map>
using namespace std;

class Cache
{
public:
    Cache()
    {}
    ~Cache()
    {}
    struct Node
    {
        int data;
        Node *next;
    };

protected:

    virtual void set(int key, int value) = 0;
    virtual int get(int) = 0;
    Node *head,*tail;
    int capacity;

    map<int,Node*> mp;
};

#endif // CACHE_H
