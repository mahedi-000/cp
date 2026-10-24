#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "n must be non-negative.\n";
        return 0;
    }

    if (n < 2) {
        cout << n << "! has no prime factors.\n";
        return 0;
    }

    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int p = 2; p <= n / p; p++) {
        if (prime[p]) {
            for (int j = p * p; j <= n; j += p) {
                prime[j] = false;
            }
        }
    }

    cout << n << "! = ";

    bool first = true;

    for (long long p = 2; p <= n; p++) {
        if (!prime[p]) continue;

        long long exponent = 0;
        long long power = p;

        while (power <= n) {
            exponent += n / power;

            if (power > n / p) break;
            power *= p;
        }

        if (!first) cout << " * ";
        cout << p << "^" << exponent;
        first = false;
    }

    cout << '\n';
    return 0;
}