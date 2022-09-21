#ifndef LRUCACHE_H
#define LRUCACHE_H

#include "Cache.h"

class LRUCache : public Cache
{
public:
    LRUCache(int capacity);
    void set(int key, int value);
    int get(int key);
    void print();
private:
    void LRUProcess(int key, Node* node);
};

#endif // LRUCACHE_H
