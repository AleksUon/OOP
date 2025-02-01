#include "Item.h"
#include <iostream>

Item F(int s) {
    Item o(s);
    return o;
}

int main() {
    int s;
    cin >> s;
    if ((s <= 2) || ( s % 2 != 0)) {
        cout << s << "?";
        return 0;
    }
    
    cout << s << endl;
    Item o1;
    o1 = F(s);
    o1.CreateA();
    o1.Completion();
    o1.Multi();
    Item o2 = o1;
    o2.twoPlus();
    o1.OutputA();
    o1.Plus();
    o2.OutputA();
    o2.Plus();
    return 0;
 }