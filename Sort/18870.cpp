#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector <int> v;

	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	vector <int> temp(v);

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < temp.size(); i++) {
		cout << lower_bound(v.begin(), v.end(), temp[i]) - v.begin() << " ";
	}

	return 0;
}
