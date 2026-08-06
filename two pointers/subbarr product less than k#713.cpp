#include<bits/stdc++.h>
using namespace std;
int subarrpodlessk(vector<int>&nums,int k){
    if(k<=1) return 0;
    int left =0;
    int currprod=1;
    int totalcount=0;
    for(int right=0;right<nums.size();right++){
        currprod *= nums[right];
        while(currprod >=k){
            currprod /= nums[left];
            left++;
        }
        totalcount += (right-left+1);
    }  
    return totalcount; 
}
int main() {

    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cout<<"enter k:";
    cin>>k;
    int ans = subarrpodlessk(nums, k);
    cout << "Total count: " << ans << endl;
    return 0;
}