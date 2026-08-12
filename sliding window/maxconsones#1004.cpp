#include<bits/stdc++.h>
using namespace std;
int maxcones(int k, vector<int>& nums){
    int low = 0;
    int zeroCount = 0;
    int maxLen = 0;
    for (int high = 0; high < nums.size(); high++) {
        if (nums[high] == 0) {
            zeroCount++;
        }

        while (zeroCount > k) {
            if (nums[low] == 0) {
                zeroCount--;
            }
            low++;
        }
        maxLen = max(maxLen, high - low + 1);
    }
    return maxLen;


}
int main() {

    int n;
    int k;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    cout << "Longest substring length: "
         << maxcones(k, nums) << endl;

    return 0;
}