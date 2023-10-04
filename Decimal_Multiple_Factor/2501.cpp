#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	vector <int>arr;

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			arr.push_back(i);
			arr.push_back(n / i);
		}
	}

	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	if (k > arr.size()) {
		cout << 0;
	}
	else {
		cout << arr[k - 1];
	}

	return 0;
}
