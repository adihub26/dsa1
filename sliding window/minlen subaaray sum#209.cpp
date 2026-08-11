#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int n=nums.size();
    int low=0;
    int currentsum=0;
    int minlen=INT_MAX;
    for(int high=0;high<n;high++){
        currentsum+=nums[high];
        while(currentsum>=target){
            int currentwlen= high-low+1;
            minlen=min(minlen, currentwlen);
            currentsum-=nums[low];
            low++;

        }
    }
    return (minlen == INT_MAX) ? 0 : minlen;
}
int main() {
    int n, target;

    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> arr(n);
    cout << "Enter " << n << " positive integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    int result = minSubArrayLen(target, arr);
    cout << "Smallest Subarray Length: " << result << endl;

    return 0;
}