/*
 * created by       : Burak Beyaz
 * created date     : 09.18.2022
 * updated date     : 09.18.2022
 * version          : 1.0
 *
*/

#include "LRUCache.h"

LRUCache::LRUCache(int capacity)
{
    this->capacity = capacity;
}

void LRUCache::set(int key, int value)
{
    Node *newnode = new Node;
    newnode->data = value;
    newnode->next = NULL;
    head = newnode;

    LRUProcess(key,newnode);

}
int LRUCache::get(int key)
{
    int returnvalue = -1;
    auto iter = mp.begin();
    while(iter != mp.end())
    {
        if(iter->first == key)
            returnvalue = iter->second->data;
        *iter++;
    }
     return returnvalue;
}

void LRUCache::LRUProcess(int key, Node *node)
{
    if(static_cast<int>(mp.size()) < capacity)
    {
        mp.insert({key,node});
    }
    else
    {
        mp.begin()->second = node;
    }
}


