#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	set<string> s;
	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		s.insert(input);
	}

	int count = 0;
	for (int i = 0; i < m; i++) {
		cin >> input;
		auto result = s.find(input);
		if (result != s.end()) {
			count++;
		}
	}

	cout << count;

	return 0;
}