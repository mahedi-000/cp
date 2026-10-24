#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

using int128 = __int128_t;

string toString(int128 n) {
    if (n == 0) return "0";

    bool negative = n < 0;

    // Avoid negating the minimum signed __int128 value.
    __uint128_t value = negative
        ? (__uint128_t)(-(n + 1)) + 1
        : (__uint128_t)n;

    string result;

    while (value > 0) {
        result += char('0' + value % 10);
        value /= 10;
    }

    if (negative) result += '-';

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int128 a = 1000000000000000000LL;
    int128 b = 1000000000000000000LL;

    int128 product = a * b;

    cout << "Product = " << toString(product) << '\n';

    return 0;
}