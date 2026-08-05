#include <bits/stdc++.h>
using namespace std;
 void p3(int N) {
        
    for (int i = 1; i <= N; i++) {
            
        for (int j = 1; j <= i; j++) {
                cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout<<"Enter number:";
    cin>>N;
    p3(N); 
    return 0;
}