#include <iostream>
using namespace std;
//
//void counting_sort(unsigned short int* arr, int size) {
//	unsigned short int* counting, * sorted;
//	unsigned short int maxNum = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > maxNum)
//			maxNum = arr[i];
//	}
//
//	counting = new unsigned short int[maxNum + 1] {0};
//	sorted = new unsigned short int[size] {0};
//
//	for (int i = 0; i < size; i++) {
//		counting[arr[i]]++;
//	}
//	for (int i = 1; i <= maxNum; i++) {
//		counting[i] += counting[i - 1];
//	}
//	for (int i = 0; i < size; i++) {
//		sorted[counting[arr[i]] - 1] = arr[i];
//		counting[arr[i]]--;
//	}
//	for (int i = 0; i < size; i++) {
//		arr[i] = sorted[i];
//	}
//
//	delete[]counting;
//	delete[]sorted;
//}

int arr[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[num] += 1;
	}
	//counting_sort(arr, n);


	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}

	return 0;
}
