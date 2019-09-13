#include <iostream>
using namespace std;

int gcd(const int a, const int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main() {
    int a = 49, b = 70;
    cout << "Goodbye, Cruel World!" << endl;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}
