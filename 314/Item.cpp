#include "Item.h"
#include <iostream>
#include <string>
 
 Item::Item() { 
    cout << "Default constructor" << endl;
 }

 Item::Item(int s) {
    if (s <= 2 || s % 2 != 0) {
        cout << s << "?";
    }
    a = new int[s];
    cout << "Constructor set" << endl;
    this -> s = s;
 }
 
 Item::Item(const Item & o) {
    cout << "Copy constructor" << endl; 
    s = o.s; 
    a = new int[s];
    for (int i = 0; i < s; i++)
    a[i] = o.a[i];
 }

 void Item::CreateA() {
    a = new int[s];
 }

 void Item::Completion() {
    for (int i = 0; i < s; i++) {
        cin >> a[i];
    }
 }

 Item::~Item() {
    static int count = 0;
    cout << "Destructor";
    if (a != nullptr)
    delete[]a;
    count++;
    if (count == 1 || count == 2) {
        cout << endl;
    }
 }

 void Item::Multi() {
    for (int i = 0; i < s; i = i + 2) {
        a[i] = a[i] * a[i+1];
    }
 }

 void Item::twoPlus() {
    for (int i = 0; i < s; i = i + 2) {  
        a[i] = a[i] + a[i + 1];
    }
 }

 int Item::Plus() {
    int sum = 0;
    for (int i = 0; i < s; i++) {
        sum = sum + a[i];
    }
    cout << sum << endl;
    return sum;
 }

 void Item::OutputA() {
    for (int i = 0; i < s; i++) {
        cout << a[i];
        if (i < s - 1) {
            cout << "   ";
        }
    }
    
    cout << endl;
 }