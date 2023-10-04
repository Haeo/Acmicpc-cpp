#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << (b * f - c * e) / (b * d - a * e) << " ";
	cout << (a * f - c * d) / (a * e - b * d);
	return 0;
}
