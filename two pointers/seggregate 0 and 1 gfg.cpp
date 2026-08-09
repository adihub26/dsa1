#include<bits/stdc++.h>
using namespace std;
void segregate0and1(vector<int> &nums) {
    int n=nums.size();
    int left=0;
    int right=n-1;
    while(left<right){
        if(nums[left]==0){
            left++;
        }
        else{
            swap(nums[left],nums[right]);
            right--;
        }
    }
        
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

    // Call the function
    segregate0and1(nums);

    cout << "Segregated array: ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}