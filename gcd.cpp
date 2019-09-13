//
// Created by MDand on 2019-09-13.
//

int gcd(const int a, const int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);

}