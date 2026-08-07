// Armstrong Number
#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n = n / 10;
    }
    return cnt;
}

bool armstrong(int n) {
    int dup = n;
    int digits = countDigits(n);

    int sum = 0;

    while (n > 0) {
        int lastdigit = n % 10;
        sum = sum + pow(lastdigit, digits);
        n = n / 10;
    }

    return sum == dup;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (armstrong(N))
        cout << "It's an Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}