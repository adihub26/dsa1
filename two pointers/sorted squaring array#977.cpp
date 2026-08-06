#include<bits/stdc++.h>
using namespace std;
vector<int> sortsqrarray(vector<int>&nums){
    int n= nums.size();
    vector<int>result(n);
    int left=0;
    int right=n-1;
    int pos=n-1;
    while(left<=right){
        int leftsqr= nums[left]*nums[left];
        int rightsqr= nums[right]*nums[right];
        if(leftsqr>rightsqr){
            result[pos]=leftsqr;
            left++;
        }
        else{
            result[pos]=rightsqr;
            right--;
        }
        pos--;
    }
    return result;
}
int main(){
    int n;
    cout<<"enter array size";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>result=sortsqrarray(nums);
    cout << "Sorted Squares: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;



}
