#include <bits/stdc++.h>
using namespace std;
void p4(int N) {        
    for (int i = 1; i <= N; i++) {            
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }   
        cout << endl;
    }
}
int main() {
    int N;
    cout<<"Enter number:";
    cin>>N;
    p4(N); 
    return 0;
}