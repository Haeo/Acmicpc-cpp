#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int arr[] = { x, y, w - x, h - y };
	sort(arr, arr + 4);
	cout << arr[0];
	return 0;
}
