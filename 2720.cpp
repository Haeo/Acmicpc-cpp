//#include <iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int cent;
//	for (int i = 0; i < n; i++) {
//		cin >> cent;
//		int cal[4] = { 0 };
//		while (cent > 0) {
//			if (cent / 25 > 0) {
//				cal[0] += cent / 25;
//				cent = cent % 25;
//			}
//			else if (cent / 10 > 0) {
//				cal[1] += cent / 10;
//				cent %= 10;
//			}
//			else if (cent / 5 > 0) {
//				cal[2] += cent / 5;
//				cent %= 5;
//			}
//			else {
//				cal[3] += cent / 1;
//				cent %= 1;
//			}
//		}
//		for (int i = 0; i < 4; i++) {
//			cout << cal[i] << " ";
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}