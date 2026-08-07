// Rev Num
#include <bits/stdc++.h>
using namespace std;

int rev(int n) {
    int revnum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revnum=(revnum *10)+lastdigit;
    }
    
    return revnum;
}
int main(){
    int N=2334546;
    cout<<N<<""<<endl;
    int digits= rev(N);
    cout<<"reverse number:"<<digits<<endl;
}