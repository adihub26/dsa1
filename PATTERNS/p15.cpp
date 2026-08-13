#include <bits/stdc++.h>
using namespace std;

void p15(int N) {
    for (int i = 0; i < N; i++) {
        for (char ch = 'A'; ch <= 'A' + (N - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout<<"Enter number:";
    cin>>N;
    p15(N); 
    return 0;
}