 #ifndef __OBEKT__H
 #define __OBEKT__H

using namespace std;

class Obekt{
public:
    int dataPu;
    Obekt (int data);
    void ChangePu();
    void Private();
    void Output();

private:
    int dataPr;
    void ChangePr();
 };

 #endif