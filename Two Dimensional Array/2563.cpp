#include <iostream>
using namespace std;

int arr[100][100];

int main() {

	int n;
	cin >> n;
	int x, y;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				arr[j][k] += 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[i][j] != 0) {
				count++;
			}
		}
	}
	cout << count;

	return 0;
}
