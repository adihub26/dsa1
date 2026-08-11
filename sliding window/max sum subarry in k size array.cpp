#include<bits/stdc++.h>
using namespace std;
int maxsumk(vector<int>&nums,int k){
    int n=nums.size();
    if(n<k) return -1;
    int windowsum=0;
    for(int i;i<k;i++){
        windowsum +=nums[i];
    }
    int maxsum = windowsum;
    for(int high=k;high<n;high++){
        windowsum+=nums[high]-nums[high-k];
        maxsum=max(maxsum,windowsum);
    }
    return maxsum;
}
int main() {

    int n,k;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter window size (k): ";
    cin >> k;
    int result = maxsumk(nums, k);
    if (result == -1) {
        cout << "Error: Window size (k=" << k << ") cannot be larger than array size (n=" << n << ")." << endl;
    } else {
        cout << "Maximum Sum Subarray of Size " << k << " is: " << result << endl;
    }

    return 0;
}

