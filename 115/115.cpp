 #include <iostream>

 using namespace std;

 int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 9) {
    cout << "N is wrong: " << N <<endl;
    return 0;
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return(0);
 }