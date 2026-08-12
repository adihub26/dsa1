#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string &s){
    vector<int> freq(256, 0);
    int low = 0;
    int maxlen =0;
    for (int high = 0; high < s.length(); high++) {
            freq[s[high]]++;       
            while (freq[s[high]]> 1) {
                freq[s[low]]--;
                low++;
            }
            maxlen=max(maxlen,high-low+1);
        }
        return maxlen;
    }
int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Longest substring length: " << lengthOfLongestSubstring(s) << endl;

    return 0;
}