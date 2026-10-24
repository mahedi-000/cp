#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 0.1;
    double b = 0.2;
    double c = a + b;

    cout << setprecision(17);
    cout << "0.1 + 0.2 = " << c << '\n';
    cout << "Expected  = " << 0.3 << '\n';

    if (c == 0.3)
        cout << "Exactly equal\n";
    else
        cout << "Not exactly equal\n";

    return 0;
}