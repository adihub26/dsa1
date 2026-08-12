#include<bits/stdc++.h>
using namespace std;
int characterReplacement(vector<int>&fruits){
    unordered_map<int,int>freq;
    int low=0,maxlen=0;
    for(int high=0;high<fruits.size();high++){
        freq[fruits[high]]++;
        while(freq.size()>2){
            freq[fruits[low]]--;
            if(freq[fruits[low]]==0){
                freq.erase(fruits[low]);
            }
            low++;
           
        }
        maxlen=max(maxlen,high-low+1);
    }
    return maxlen;
}
int main() {
    int n;

    cout << "Enter number of fruits: ";
    cin >> n;

    vector<int> fruits(n);

    cout << "Enter fruits: ";
    for (int i = 0; i < n; i++) {
        cin >> fruits[i];
    }

    cout << "Maximum fruits collected: "
         << characterReplacement(fruits) << endl;

    return 0;
}