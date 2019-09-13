#include <iostream>
#include "gcd.hpp"
using namespace std;

int main() {
    cout << "Goodbye, Cruel World!" << endl;
    int a = 70, b = 0;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    a = 0, b = 200;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    a = 420, b = 110;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
