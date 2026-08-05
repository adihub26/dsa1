#include <bits/stdc++.h>
using namespace std;
void p6(int N) {
        
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
                cout << N - j + 1 << " ";
        }
        cout << endl;
    }
}
int main() {
    int N;
    cout<<"Enter number:";
    cin>>N;
    p6(N); 
    return 0;
}