 #include <iostream>

 using namespace std;

 int main()
 {
    int n;
    cin >> n;
    int sum = 0;
    
    if (n <= 0){
        cout << "n is wrong (" << n << ")" << endl;
        return (0);
    }

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Sum_n = "<< sum << endl;

    return(0);
 }