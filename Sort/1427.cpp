#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	char* arr = new char[12] {0};
	int i = 0;
	for (i; i < 10; i++) {
		char ch = cin.get();
		if (ch == '\n') {
			break;
		}
		arr[i] = ch;
	}

	sort(arr, arr + i, greater<int>());

	for (int j = 0; j < i; j++) {
		cout << arr[j];
	}

	return 0;
}