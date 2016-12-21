#include "lru.h"

int main(int argc, char const *argv[])
{
    LRUCache c(2);
    c.set(2, 1);
    c.set(1, 1);
    cout << c.get(2) << endl;
    c.set(4, 1);
    cout << c.get(1) << endl;
    cout << c.get(2) << endl;
    return 0;
}