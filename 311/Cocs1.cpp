#include <iostream>
#include "Cocs1.h"

using namespace std;

Cocs1::Cocs1(int s) {
    if (s <= 4){
        a = nullptr;
        cout << s << "?";
        exit(0);
    }

    a = new int[s];
    for (int i = 0; i < s; i++)
    a[i] = s;
}

void Cocs1::Output() {
    cout<<a[0];
    
    for (int i = 1;i < a[0]; i++)
    cout << "  " << a[i];
}

Cocs1::~Cocs1() {
    if( a != nullptr){
        delete[] a;
    }
 }