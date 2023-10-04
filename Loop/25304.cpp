#include <iostream>
using namespace std;
int main() {
	int X, N;
	int price, num;
	int result = 0;
	cin >> X >> N;
	for (int i = 0; i < N; i++) {
		cin >> price >> num;
		result += price * num;
	}
	if (result == X) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}
