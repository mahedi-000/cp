#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive integer.\n";
        return 0;
    }

    vector<long long> divisors;

    for (long long i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    cout << "Divisors: ";
    for (long long d : divisors) {
        cout << d << " ";
    }

    cout << '\n';
    return 0;
}