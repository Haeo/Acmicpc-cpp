#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, string>> v;
	int age;
	string name;

	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		if (name.length() > 100) {
			continue;
		}
		v.push_back({ age, name});
	}

	stable_sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
		return a.first < b.first;
		});

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	
	return 0;
}