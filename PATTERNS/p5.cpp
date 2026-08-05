#include <bits/stdc++.h>
using namespace std;
void p5(int N) {
        // Outer loop for rows
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
            cout << "* ";
        }
        cout<<endl;
    }
}
int main() {
    int N;
    cout<<"Enter number:";
    cin>>N;
    p5(N); 
    return 0;
}