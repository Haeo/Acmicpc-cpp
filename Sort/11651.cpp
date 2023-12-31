#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int x, y;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		cin >> y >> x;
		v.push_back({ x, y });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].second << " " << v[i].first << "\n";
	}

	return 0;
}