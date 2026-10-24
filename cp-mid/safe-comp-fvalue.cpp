#include <iostream>
#include <cmath>
using namespace std;

bool nearlyEqual(double a, double b,
                 double absEps = 1e-9,
                 double relEps = 1e-9) {
    if (a == b) return true; // Includes equal infinities.

    if (!isfinite(a) || !isfinite(b))
        return false;

    double diff = fabs(a - b);
    double scale = max(fabs(a), fabs(b));

    return diff <= max(absEps, relEps * scale);
}

int main() {
    double a = 0.1 + 0.2;
    double b = 0.3;

    if (nearlyEqual(a, b))
        cout << "Approximately equal\n";
    else
        cout << "Not approximately equal\n";

    return 0;
}