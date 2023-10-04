#include <iostream>
using namespace std;

class Problem
{
private:
	int m;
	int n;
	int sum;
	int min;

public:
	void Init(int a, int b) {
		m = a;
		n = b;
		sum = 0;
		min = 0;
	}
	void Find() {
		int* arr = new int[n + 1];
		for (int i = 2; i <= n; i++) {
			arr[i] = 1;
		}

		for (int i = 2; i <= n; i++) {
			if (arr[i] == 0) continue;
			for (int j = i * 2; j <= n; j += i) {
				arr[j] = 0;
			}	
			if (i >= m && arr[i] == 1) {
				sum += i;
				if (min == 0) {
					min = i;
				}
			}
		}

		if (sum == 0) {
			cout << -1;
		}
		else {
			cout << sum << "\n" << min;
		}
	}
};

int main() {
	Problem pro;
	int a, b;
	cin >> a >> b;
	pro.Init(a, b);
	pro.Find();

	return 0;
}
