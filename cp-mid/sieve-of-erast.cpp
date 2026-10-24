#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "No primes in this range.\n";
        return 0;
    }

    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int p = 2; p*p <= n; p++) {
        if (prime[p]) {
            for (int j = p * p; j <= n; j += p) {
                prime[j] = false;
            }
        }
    }

    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (prime[i]) cout << i << " ";
    }

    cout << '\n';
    return 0;
}