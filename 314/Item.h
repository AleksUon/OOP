#ifndef __ITEM__H
#define __ITEM__H
#include <iostream>

using namespace std;

class Item {
private:
    int* a;
    int s;
    
public:
    ~Item();
    Item();
    Item(int s);
    Item(const Item& o);
    void Completion();
    void OutputA();
    void Multi();
    void twoPlus();
    int Plus();
    void CreateA();
};

#endif