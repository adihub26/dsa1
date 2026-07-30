#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    void pattern2(int N) {
        // Loop for rows
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution sol;
    // Define N
    int N = 5;
    sol.pattern2(N);
    return 0;
}