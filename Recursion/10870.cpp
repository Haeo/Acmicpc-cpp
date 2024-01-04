#include <iostream>
using namespace std;

int pibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return pibo(n - 1) + pibo(n - 2);
    }

}

int main() {
    int n;
    cin >> n;

    int result = pibo(n);
    cout << result;
    return 0;
}