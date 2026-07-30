#include <bits/stdc++.h>
using namespace std;
void p1(int N) {    
    for (int i = 0; i < N; i++) {  
        for (int j = 0; j < N; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }
}

int main() {
    int N;
    cin>>N;
    cout<<"Enter number:";
    p1(N); 
    return 0;
}