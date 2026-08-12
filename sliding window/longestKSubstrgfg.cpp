#include<bits/stdc++.h>
using namespace std;
int longestKSubstr(string &s,int k){
    vector<int> freq(256, 0);

    int low = 0;
    int maxlen = -1;
    int d = 0;
    for (int high = 0; high < s.length(); high++) {
        if (freq[s[high]] == 0) {
        d++;
                
        }
        freq[s[high]]++;
        while (d > k) {
            freq[s[low]]--;
            if (freq[s[low]] == 0) {
                d--;
                    
            }
            low++;
                
        }
        if (d == k) {
            maxlen = max(maxlen, high - low + 1);
                
        }
            
    }
    return maxlen;
}
int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    cout << "Longest substring length: " << longestKSubstr(s, k) << endl;

    return 0;
}