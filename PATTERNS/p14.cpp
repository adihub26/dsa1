#include <bits/stdc++.h>
using namespace std;

void p14(int N) {
    for (int i = 0; i < N; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";  
        }

        cout << endl;
    }
}

int main() {
    int N;
    cout<<"Enter number:";
    cin>>N;
    p14(N); 
    return 0;
}
