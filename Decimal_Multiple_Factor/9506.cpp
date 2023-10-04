#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	int n;
	vector <int>arr;

	while (1) {
		arr.clear();
		int sum = 0;
		cin >> n;
		if (n == -1) {
			break;
		}

		for (int i = 1; i <= sqrt(n); i++) {
			if (n % i == 0) {
				arr.push_back(i);
				arr.push_back(n / i);
			}
		}

		sort(arr.begin(), arr.end());
		arr.erase(unique(arr.begin(), arr.end()), arr.end());

		sum = accumulate(arr.begin(), arr.end() - 1, 0);

		if (sum == n) {
			cout << n << " = " << arr[0];
			for (int i = 1; i < arr.size() - 1; i++) {
				printf(" + %d", arr[i]);
			}
			cout << "\n";
		}
		else {
			cout << n << " is NOT perfect.\n";
		}
	}
	

	return 0;
}
