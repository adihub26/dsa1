#include <bits/stdc++.h>
using namespace std;

void p12(int N) {
    int spaces = 2 * (N - 1);

    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;

        spaces -= 2;
    }
}

int main() {
    int N;
    cout<<"Enter number:";
    cin>>N;
    p12(N); 
    return 0;
}