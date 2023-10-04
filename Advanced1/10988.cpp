#include <iostream>
#include <string>
using namespace std;
int main() {
	string n;
	cin >> n;
	int size = n.length();
	int count = 0;
	if (size == 1) {
		cout << "1";
	}
	for (int i = 0; i < size / 2; i++) {
		if (n[i] != n[size - i - 1]) {
			cout << "0";
			break;
		}
		else {
			count++;
			if (count == size / 2) {
				cout << "1";
				break;
			}
		}
	}

	return 0;
}
