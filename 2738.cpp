//#include <iostream>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int *a = new int[n * m];
//	int* b = new int[n * m];
//
//	for (int i = 0; i < n * m; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n * m; i++) {
//		cin >> b[i];
//	}
//	for (int i = 0; i < n * m; i++) {
//		cout << a[i] + b[i];
//		if ((i+1) / n > 0 && (i+1) % n == 0) {
//			cout << "\n";
//		}
//		else {
//			cout << " ";
//		}
//	}
//	return 0;
//}