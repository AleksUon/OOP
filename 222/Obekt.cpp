 #include "Obekt.h"
 #include <iostream>
 using namespace std;

 Obekt::Obekt(int data) {
   dataPu=data;
   dataPr=3*data;
 }

 void Obekt::ChangePu() {
   dataPu+=4;
   dataPr++;
 }

 void Obekt::Private() {
   ChangePr();
 }

 void Obekt::Output() {
   cout << "Value of the available property "<< dataPu << "; Value of a hidden property "<< dataPr;
 }

 void Obekt::ChangePr() {
   dataPu += 7;
   dataPr += 5;
 }