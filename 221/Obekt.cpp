 #include "Obekt.h"
 #include <iostream>

 Obekt::Obekt(int data) {
    dataPu = data;
    dataPr = 2*data;
 }

 void Obekt::ChangePu() {
    dataPu++;
    dataPr += 4;
 }

 void Obekt::Private() {
    ChangePr();
 }

 void Obekt::Output() {
    cout<<"Value of the available property "<<dataPu<< "; Value of a hidden property "<<dataPr;
 }

 void Obekt::ChangePr() {
    dataPu += 5;
    dataPr += 7;
 }