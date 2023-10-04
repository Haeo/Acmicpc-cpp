#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;

	while (n >= 0) {
		if (n % 5 == 0) {
			count += n / 5;
			break;
		}
		n -= 3;
		count++;
	}

	if (n < 0) {
		cout << -1;
	}
	else {
		cout << count;
	}

	return 0;
}