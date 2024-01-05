#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = lcm(b, d);
    int n = a * (m / b) + c * (m / d);
    while (gcd(m, n) != 1) {
        int r = gcd(m, n);
        m = m / r;
        n = n / r;
    }
    cout << n << " " << m;

    return 0;
}
