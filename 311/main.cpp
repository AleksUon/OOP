#include <iostream>
#include "Cocs1.h"

int main() {
    int data;
    cin >> data;
    Cocs1 ob1(data);
    cin >> data;
    Cocs1 ob2(data);
    int* b = ob1.a;
    ob1 = ob2;
    ob1.a = b;
    ob1.Output();
    cout << endl;
    ob2.Output();
    return(0);
}