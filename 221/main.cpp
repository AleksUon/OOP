 #include "Obekt.h"
 #include <iostream>

 int main() {
    int i_data;
    cin >> i_data;
    Obekt obj(i_data);
    obj.Output();
    cout << endl;
    obj.ChangePu();
    obj.Output();
    cout << endl;
    cin >> i_data;
    obj.dataPu*=i_data;
    obj.Output();
    cout << endl;
    obj.Private();
    obj.Output();
    return(0);
 }