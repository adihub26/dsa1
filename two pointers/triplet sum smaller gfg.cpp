#include<bits/stdc++.h>
using namespace std;
int threesumsmall(vector<int>&nums, int target){
    int n =nums.size();
    sort(nums.begin(),nums.end());
    int count=0;
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int currentsum=nums[i]+nums[left]+nums[right];
            if(currentsum<target){
                count+=(right-left);
                left++;
            }
            else{
                right--;
            }
        }
    }
    return count;
}
int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;

    cout << "Enter target: ";
    cin >> target;

    int result = threesumsmall(nums, target);

    cout << "no.of pairs: " << result << endl;

    return 0;
}