#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>&nums){
    if(nums.empty()) return 0;
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[j-1]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;

}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for (int k = 0; k < n; k++) {
        cin >> nums[k];
    }

    // Function Call
    int newSize = removeduplicates(nums);

    cout << "New size = " << newSize << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
//Time Complexity: O(N) Space Complexity:O(1)