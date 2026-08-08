#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int mindiff=INT_MAX;
    int closestsum=0;
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int currentsum=nums[i]+nums[left]+nums[right];
            int currentdiff= abs(currentsum-target);
            if(currentdiff<mindiff){
                    mindiff=currentdiff;
                    closestsum=currentsum;
            }
            if(currentsum==target) return currentsum;
            else if(currentsum<target) left++;
            else right--;
            
        }
    }
    return closestsum;
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

    int result = threeSumClosest(nums, target);

    cout << "Closest Sum: " << result << endl;

    return 0;
}