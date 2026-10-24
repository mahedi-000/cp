#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "Enter n >= 2.\n";
        return 0;
    }

    vector<int> spf(n + 1);

    for (int i = 0; i <= n; i++) {
        spf[i] = i;
    }

    for (int p = 2; p*p <= n ; p++) {
        if (spf[p] == p) {
            for (int j = p * p; j <= n; j += p) {
                if (spf[j] == j) {
                    spf[j] = p;
                }
            }
        }
    }

    int x;
    cout << "Enter number to factorize: ";
    cin >> x;

    if (x < 2 || x > n) {
        cout << "Number must be between 2 and n.\n";
        return 0;
    }

    cout << "Prime factors: ";
    while (x > 1) {
        cout << spf[x] << " ";
        x /= spf[x];
    }

    cout << '\n';
    return 0;
}