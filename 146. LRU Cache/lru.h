#ifndef LRU_H
#define LRU_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <list>
#include <map>

using namespace std;

class LRUCache{
    int capacity;
    int current;
    unordered_map<int, list<pair<int, int> >::iterator> cache;
    list<pair<int, int> > link;
    /*first:    key*/
    /*second:   value*/

public:
    LRUCache(int c) {
        capacity = c;
        current = 0;
    }
    
    int get(int key) {
        if (cache.count(key) > 0)
        {
            link.splice(link.begin(), link, cache[key]);
            return cache[key]->second;
        }
        else
        {
            return -1;
        }
    }
    
    void set(int key, int value) {
        if (cache.count(key) > 0)
        {
            cache[key]->second = value;
            link.splice(link.begin(), link, cache[key]);
            return;
        }
        else
        {
            if (current < capacity)
            {
                pair<int, int> tmp;
                tmp.first = key;
                tmp.second = value;
                link.push_front(tmp);
                cache[key] = link.begin();
                current++;
            }
            else
            {
                pair<int, int> it = link.back();
                unordered_map<int, list<pair<int, int> >::iterator>::iterator itt;
                itt = cache.find(it.first);
                cache.erase(itt);
                link.pop_back();
                pair<int, int> tmp;
                tmp.first = key;
                tmp.second = value;
                link.push_front(tmp);
                cache[key] = link.begin();
            }
        }
    }
};

#endif