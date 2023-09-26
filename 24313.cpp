#include <iostream>
using namespace std;
int main() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	if (a * n + b <= n * c && c >= a) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}