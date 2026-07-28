// Palindrom
#include <bits/stdc++.h>
using namespace std;

int palindrome(int n) {
    int revnum=0;
    int dup=n;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revnum=(revnum *10)+lastdigit;
    }
    
    return revnum;
}
int main(){
    int N;
    cin>>N;
    if(palindrome(N)==N){
        cout<<"its palindrome"<<endl;
    }else{
        cout<<"not a palindrome"<<endl;
    }
}