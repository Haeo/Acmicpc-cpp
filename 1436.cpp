#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "666";
	int n;
	cin >> n;
	int count = 0;
	int value = 666;
	while (1)
	{
		string num = to_string(value);

		if (num.find(s) != string::npos) {
			count++;
		}

		if (count == n) {
			cout << value;
			break;
		}
		
		value++;
	}

	return 0;
}