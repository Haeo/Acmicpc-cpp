#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int students, cutline;
	cin >> students >> cutline;

	int* arr = new int[students];
	for (int i = 0; i < students; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + students, greater<int>());

	cout << arr[cutline - 1];

	delete[]arr;

	return 0;
}