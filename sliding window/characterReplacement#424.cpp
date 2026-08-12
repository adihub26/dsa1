#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string &s,int k){
    vector<int>freq(26,0);
    int low=0,maxfreq=0,maxlen=0;
    for(int high=0;high<s.length();high++){
        freq[s[high]-'A']++;
        maxfreq=max(maxfreq,freq[s[high]-'A']);
        while((high-low+1)-maxfreq>k){
            freq[s[low]-'A']--;
            low++;
            
        }
        maxlen=max(maxlen,high-low+1);
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

    cout<< "length of the longest valid window:"<<characterReplacement(s, k) << endl;

    return 0;
}