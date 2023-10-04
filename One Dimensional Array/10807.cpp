#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int find;
	int result = 0;
	cin >> find;
	for (int i = 0; i < n; i++) {
		if (arr[i] == find) {
			result++;
		}
	}
	cout << result;

	return 0;
}
