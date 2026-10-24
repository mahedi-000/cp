#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a = 1.0f / 3.0f;
    double b = 1.0 / 3.0;
    long double c = 1.0L / 3.0L;

    cout << setprecision(20);

    cout << "Float       = " << a << '\n';
    cout << "Double      = " << b << '\n';
    cout << "Long double = " << c << '\n';

    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of long double: " << sizeof(long double) << " bytes\n";

    return 0;
}