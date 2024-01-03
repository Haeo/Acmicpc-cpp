#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	set<string> s;

	string name, co;
	for (int i = 0; i < n; i++) {
		cin >> name >> co;
		if (co == "enter") {
			s.insert(name);
		} 
		else if (co == "leave") {
			s.erase(s.find(name));
		}
	}

	for_each(s.rbegin(), s.rend(), [](string i) {
		cout << i << "\n";
		});
	

	return 0;
}