#include <iostream>
#include <string>
using namespace std;
int main() {
	string arr[3] = {};
	double score = 0.0;
	double sub = 0.0;
	for (int i = 0; i < 20; i++) {
		cin >> arr[0] >> arr[1] >> arr[2];

		if (arr[2] == "A+") {
			score += 4.5 * stod(arr[1]);
		}
		else if (arr[2] == "A0") {
			score += 4.0 * stod(arr[1]);
		}
		else if (arr[2] == "B+") {
			score += 3.5 * stod(arr[1]);
		}
		else if (arr[2] == "B0") {
			score += 3.0 * stod(arr[1]);
		}
		else if (arr[2] == "C+") {
			score += 2.5 * stod(arr[1]);
		}
		else if (arr[2] == "C0") {
			score += 2.0 * stod(arr[1]);
		}
		else if (arr[2] == "D+") {
			score += 1.5 * stod(arr[1]);
		}
		else if (arr[2] == "D0") {
			score += 1.0 * stod(arr[1]);
		}
		else if (arr[2] == "F") {
			score += 0 * stod(arr[1]);
		}
		else if (arr[2] == "P") {
			continue;
		}

		sub += stod(arr[1]);
	}

	std::cout << score / sub;

	return 0;
}
