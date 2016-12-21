#ifndef LRU_H
#define LRU_H

#include <iostream>
#include <map>

using namespace std;

class LRUCache{
    struct entry
    {
        unsigned value;
        int times;
    };
    int capacity;
    int current;
    int times;
    unordered_map<int, struct entry> cache;

public:
    LRUCache(int c) {
        capacity = c;
        times = 0;
        current = 0;
    }
    
    int get(int key) {
        if (cache.count(key) > 0)
        {
            cache[key].times = times++;
            return cache[key].value;
        }
        else
        {
            return -1;
        }
    }
    
    void set(int key, int value) {
        if (cache.count(key) > 0)
        {
            cache[key].value = value;
            cache[key].times = times++;
            return;
        }
        else
        {
            if (current < capacity)
            {
                cache[key].value = value;
                cache[key].times = times++;
                current++;
            }
            else
            {
                unordered_map<int, struct entry>::iterator it;
                it = get_least();
                cache.erase(it);
                cache[key].value = value;
                cache[key].times = times++;
            }
        }
    }

    unordered_map<int, struct entry>::iterator get_least()
    {
        unordered_map<int, struct entry>::iterator it, it2, tmp;
        it = cache.begin();
        tmp = ++cache.begin();
        for (it2 = tmp; it2 != cache.end(); it2++)
        {
            if (it2->second.times < it->second.times)
            {
                it = it2;
            }
        }
        return it;
    }
};

#endif