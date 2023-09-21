//#include <iostream>
//using namespace std;
//int main() {
//	int dice[7] = { 0 };
//	int num;
//	int value = 0, max = 0;
//	for (int i = 0; i < 3; i++) {
//		cin >> num;
//		dice[num]++;
//	}
//
//	for (int i = 1; i < 7; i++) {
//		if (dice[i] == 3) {
//			value = 10000 + i * 1000;
//			break;
//		}
//		else if (dice[i] == 2) {
//			value = 1000 + i * 100;
//			break;
//		}
//		else if (dice[i] == 1 && max < i) {
//			max = i;
//		}
//	}
//	if (value == 0) {
//		value = max * 100;
//	}
//
//	cout << value;
//
//	return 0;
//}