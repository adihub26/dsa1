// Count Digits
#include <bits/stdc++.h>
using namespace std;

int count(int n) {
    int cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}
int main(){
    int N=2334546;
    cout<<N<<""<<endl;
    int digits= count(N);
    cout<<"no. of digits:"<<digits<<endl;
}
