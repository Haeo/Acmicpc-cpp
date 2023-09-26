#include <iostream>
using namespace std;
int main() {
	int n = 1, result;
	cin >> n >> result;
	int sum = 0;
	int arr[100] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				int temp = arr[i] + arr[j] + arr[k];
				if (temp < result && sum < temp) {
					sum = temp;
				}
				if (temp == result) {
					sum = temp;
					break;
				}
			}
		}
	}
	cout << sum;

	return 0;
}