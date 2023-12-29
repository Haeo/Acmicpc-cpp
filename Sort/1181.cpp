#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, string>> v;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s.length() > 50) {
			continue;
		}
		v.push_back({ s.length(), s });
	}

	sort(v.begin(), v.end());
	auto last = unique(v.begin(), v.end());

	v.erase(remove_if(v.begin(), last, [](const pair<int, string>& p) {
		return p.second == "";
		}), v.end());

	for (int i = 0; i < v.size(); i++) {
		if (v[i].second != "") {
			cout << v[i].second << "\n";
		}
	}
	

	return 0;
}