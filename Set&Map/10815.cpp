#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n;
	int input;
	set<int> sn;
	for (int i = 0; i < n; i++) {
		cin >> input;
		sn.insert(input);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> input;
		auto req = sn.insert(input);
		if (req.second) {
			cout << "0";
		}
		else {
			cout << "1";
		}
		cout << " ";
	}

	return 0;
}
