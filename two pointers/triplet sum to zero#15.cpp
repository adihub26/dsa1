#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> threeSum(vector<int>&nums) {
    vector<vector<int>>result;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        int left=i+1;
        int right=n-1;
        while(left<right){
            int currentsum=nums[i]+nums[left]+nums[right];
            if(currentsum==0){
                result.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1]){
                    left++;
                }
                while(left<right && nums[right]==nums[right+1]){
                    right--;
                }
            }
            else if(currentsum<0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return result;
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
    vector<vector<int>> result = threeSum(nums);

    cout << "\nTriplets whose sum is 0:\n";

    for (auto triplet : result) {
        cout << "[ ";

        for (int x : triplet) {
            cout << x << " ";
        }

        cout << "]\n";
    }

    return 0;
}
    