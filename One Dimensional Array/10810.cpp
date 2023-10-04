#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int* arr = new int[n];
	int i, j, k;
	for (int num = 0; num < n; num++) {
		arr[num] = 0;
	}
	for (int temp = 0; temp < m; temp++) {
		cin >> i >> j >> k;
		for (int num = i - 1; num <= j - 1; num++) {
			arr[num] = k;
		}
	}
	for (int num = 0; num < n; num++) {
		cout << arr[num] << " ";
	}

	return 0;
}
