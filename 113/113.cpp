 #include <iostream>

 using namespace std;

 int main(){
    long long int a;
    int count=0;
    cin >> a;
    
    if (a == 0){
        count = 1;
    }

    else {
        while (a != 0) {
            count++;
            a /= 10;
        }
    }
    cout << "Number of digits: "<< count << endl;

    return(0);
 }