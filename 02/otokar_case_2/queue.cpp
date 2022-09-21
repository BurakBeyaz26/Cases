/*
 * created by       : Burak Beyaz
 * created date     : 08.18.2022
 * updated date     : 08.18.2022
 * version          : 1.0
 *
*/

#include "queue.h"

template<> Queue<int>::Queue()
{

}
template<> Queue<char>::Queue()
{

}
template<> Queue<string>::Queue()
{

}

template<> Queue<int>::~Queue()
{

}
template<> Queue<char>::~Queue()
{

}
template<> Queue<string>::~Queue()
{

}

template<> int Queue<int>::pop()
{
    length--;
    return arr[length];
}

template<> char Queue<char>::pop()
{
    length--;
    return arr[length];
}
template<> string Queue<string>::pop()
{
    length--;
    return arr[length];
}

template<> void Queue<int>::push(int data)
{
    mtx.lock();
    if(length < QUEUE_CAPACITY)
    {
        arr[length] = data;
        length++;
    }
    mtx.unlock();
}
template<> void Queue<char>::push(char data)
{
    mtx.lock();
    if(length < QUEUE_CAPACITY)
    {
        arr[length] = data;
        length++;
    }
    mtx.unlock();
}
template<> void Queue<string>::push(string data)
{
    mtx.lock();
    if(length < QUEUE_CAPACITY)
    {
        arr[length] = data;
        length++;
    }
    mtx.unlock();
}

template<> int Queue<int>::size()
{
    return length;
}
template<> int Queue<char>::size()
{
    return length;
}
template<> int Queue<string>::size()
{
    return length;
}

template<> bool Queue<int>::empty()
{
    if(length == 0) return true;
    else return false;
}
template<> bool Queue<char>::empty()
{
    if(length == 0) return true;
    else return false;
}
template<> bool Queue<string>::empty()
{
    if(length == 0) return true;
    else return false;
}

template<> Queue2<int>::Queue2()
{
    head = NULL;
    tail = NULL;
}
template<> Queue2<int>::~Queue2()
{

}
template<> Queue2<char>::Queue2()
{
    head = NULL;
    tail = NULL;
}
template<> Queue2<char>::~Queue2()
{

}
template<> Queue2<string>::Queue2()
{
    head = NULL;
    tail = NULL;
}
template<> Queue2<string>::~Queue2()
{

}
template<> int Queue2<int>::pop()
{
    int value;
    if (head == NULL);
    if (head->next == NULL)
    {
        value = head->data;     // last queue value
        delete head;
    }
    else
    {
        node* second_last = head;
        while (second_last->next->next != NULL)
        {
            second_last = second_last->next;
        }

        value = second_last->next->data;            // keep deleted queue value
        delete (second_last->next);

        second_last->next = NULL;

    }
    return value;
}

template<> char Queue2<char>::pop()
{
    char value;
    if (head == NULL);
    if (head->next == NULL)
    {
        value = head->data;     // last queue value
        delete head;
    }
    else
    {
        node* second_last = head;
        while (second_last->next->next != NULL)
        {
            second_last = second_last->next;
        }

        value = second_last->next->data;            // keep deleted queue value
        delete (second_last->next);

        second_last->next = NULL;

    }
    return value;
}

template<> string Queue2<string>::pop()
{
    string value;
    if (head == NULL);
    if (head->next == NULL)
    {
        value = head->data;     // last queue value
        delete head;
    }
    else
    {
        node* second_last = head;
        while (second_last->next->next != NULL)
        {
            second_last = second_last->next;
        }

        value = second_last->next->data;            // keep deleted queue value
        delete (second_last->next);

        second_last->next = NULL;

    }
    return value;
}

template<> void Queue2<int>::push(int data)
{
    mtx.lock();

    node *tmp = new node;
    tmp->data = data;
    tmp->next = NULL;

    if(head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }

    mtx.unlock();
}
template<> void Queue2<char>::push(char data)
{
    mtx.lock();

    node *tmp = new node;
    tmp->data = data;
    tmp->next = NULL;

    if(head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }

    mtx.unlock();
}
template<> void Queue2<string>::push(string data)
{
    mtx.lock();

    node *tmp = new node;
    tmp->data = data;
    tmp->next = NULL;

    if(head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }

    mtx.unlock();
}

template<> int Queue2<int>::size()
{
    int counter = 0;
    node* current = head;
    while (current != NULL)
    {
        counter++;
        current = current->next;
    }
    return counter;
}
template<> int Queue2<char>::size()
{
    int counter = 0;
    node* current = head;
    while (current != NULL)
    {
        counter++;
        current = current->next;
    }
    return counter;
}
template<> int Queue2<string>::size()
{
    int counter = 0;
    node* current = head;
    while (current != NULL)
    {
        counter++;
        current = current->next;
    }
    return counter;
}

template<> bool Queue2<int>::empty()
{
    int counter = 0;
    node* current = head;
    while (current != NULL)
    {
        counter++;
        current = current->next;
    }

    if(counter==0) return true;
    else return false;
}
template<> bool Queue2<char>::empty()
{
    int counter = 0;
    node* current = head;
    while (current != NULL)
    {
        counter++;
        current = current->next;
    }

    if(counter==0) return true;
    else return false;
}
template<> bool Queue2<string>::empty()
{
    int counter = 0;
    node* current = head;
    while (current != NULL)
    {
        counter++;
        current = current->next;
    }

    if(counter==0) return true;
    else return false;
}
