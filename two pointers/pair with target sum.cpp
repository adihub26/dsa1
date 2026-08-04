#include<bits/stdc++.h>
using namespace std;
bool twosum(vector<int>&nums, int target){
    unordered_set<int>seen;
    for(int num:nums){
        int complement=target- num;
        if(seen.find(complement) != seen.end()){
            return true;
        }
    seen.insert(num);
    }
    return false;
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

    int target;
    cout << "Enter target: ";
    cin >> target;

    if (twosum(nums, target))
        cout << "Pair exists";
    else
        cout << "Pair does not exist";

    return 0;
}
//T:O(N) S:O(N)