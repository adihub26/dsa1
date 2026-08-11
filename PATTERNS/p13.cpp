#include <bits/stdc++.h>
using namespace std;

void p13(int N) {
    int num = 1;
    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= i; j++) {
            cout << num << " ";  
            num = num + 1;  
        }
        cout << endl;
    }
}

int main() {
     int N;
    cout<<"Enter number:";
    cin>>N;
    p13(N); 
    return 0;
}