#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
	int num;
	int arr[3] = { 0 };
	set<int> s;
	while (1) {
		for (int i = 0; i < 3; i++) {
			cin >> num;
			arr[i] = num;
			s.insert(num);
		}
		if (s.size() == 1 && arr[0] == 0) {
			break;
		}
		sort(arr, arr + 3);
		if (arr[2] >= arr[0] + arr[1]) {
			cout << "Invalid" << endl;
		}
		else if (s.size() == 1) {
			cout << "Equilateral" << endl;
		}
		else if (s.size() == 2) {
			cout << "Isosceles" << endl;
		}
		else if (s.size() == 3) {
			cout << "Scalene" << endl;
		}
		s.clear();
	}

	return 0;
}
