#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	cin >> n;
	int temp = 1;
	while (1)
	{
		int sum = 0;
		if (temp > stoi(n)) {
			cout << 0;
			break;
		}

		string temp_str = to_string(temp);
		sum += temp;
		for (int i = 0; i < temp_str.length(); i++) {
			sum += temp_str[i] - '0';
		}

		if (sum == stoi(n)) {
			cout << temp;
			break;
		}

		temp++;
	}
}