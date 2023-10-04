#include <iostream>
using namespace std;
int main() {
	int count;
	int a, b;
	int a_min = 10000, a_max = -10000;
	int b_min = 10000, b_max = -10000;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a >> b;
		if (count == 1) {
			cout << 0;
			return 0;
		}
		if (a > a_max) {
			a_max = a;
		}
		if (a < a_min) {
			a_min = a;
		}
		if (b > b_max) {
			b_max = b;
		}
		if (b < b_min) {
			b_min = b;
		}
	}
	cout << (abs(a_max - a_min)) * abs((b_max - b_min));

	return 0;
}
