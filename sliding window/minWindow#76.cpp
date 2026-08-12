#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) return "";

        unordered_map<char, int> tFreq;
        for (char c : t) tFreq[c]++;

        int required = tFreq.size(); // Number of unique characters in t that must be satisfied
        int formed = 0;             // Number of unique characters currently satisfied in window

        unordered_map<char, int> windowFreq;
        int low = 0;
        int minLen = INT_MAX;
        int startIdx = -1;

        for (int high = 0; high < s.length(); high++) {
            char c = s[high];
            windowFreq[c]++;

            // Check if adding c satisfies its required frequency in t
            if (tFreq.count(c) && windowFreq[c] == tFreq[c]) {
                formed++;
            }

            // Shrink window from left as long as it remains valid
            while (formed == required) {
                // Update minimum window answer
                if (high - low + 1 < minLen) {
                    minLen = high - low + 1;
                    startIdx = low;
                }

                char leftChar = s[low];
                windowFreq[leftChar]--;

                // If removing leftChar breaks the validity for that character
                if (tFreq.count(leftChar) && windowFreq[leftChar] < tFreq[leftChar]) {
                    formed--;
                }

                low++;
            }
        }

        return startIdx == -1 ? "" : s.substr(startIdx, minLen);
    }
};