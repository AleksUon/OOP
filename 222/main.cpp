 #include "Obekt.h"
 #include <iostream>
 using namespace std;

int main() {
   int i_data;
   cin >> i_data;
   Obekt *obj = new Obekt(i_data);
   obj -> Output();
   cout<<endl;
   obj -> ChangePu();
   obj -> Output();
   cout << endl;
   cin >> i_data;
   if (i_data > obj -> dataPu)
   {
   obj -> dataPu = i_data*8;
   }
   obj -> Output();
   cout << endl;
   obj -> Private();
   obj -> Output();
   delete obj;
   return(0);
}