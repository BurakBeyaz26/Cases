#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <mutex>

using namespace std;

// Queue implementation with Array

#define QUEUE_CAPACITY 100

template <typename T> class Queue
{
public:
    Queue();
    ~Queue();

    T pop();
    void push(T data);
    int size();
    bool empty();

private:
    int length = 0;
    T arr[QUEUE_CAPACITY];
    mutex mtx;
};


// Queue implementation with Linked List

template <typename T> class Queue2
{
public:
    struct node
    {
        T data;
        node *next;
    };

    Queue2();
    ~Queue2();

    T pop();
    void push(T data);
    int size();
    bool empty();

private:
    node *head,*tail;
    mutex mtx;
};


#endif // QUEUE_H
