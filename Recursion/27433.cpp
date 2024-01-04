#include <iostream>
using namespace std;

long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    long result = factorial(n);
    cout << result << "\n";
    return 0;
}
