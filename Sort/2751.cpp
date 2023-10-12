#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// º´ÇÕ Á¤·Ä
void merge(int arr[], int start, int mid, int end) {
	int* temp = new int[start - end];
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j]) {
			temp[k] = arr[i];
			i++;
		}
		else {
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
	if (i > mid) {
		for (int t = j; t <= end; t++) {
			temp[k] = arr[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= mid; t++) {
			
		}
	}
}

void mergeSort(int array[], int const begin, int const end) {
	if (begin >= end) {
		return;
	}

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

// Äü Á¤·Ä
int partition(int arr[], int start, int end) {
	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if(arr[i]<=pivot)
			count++;
	}

	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {
		while (arr[i] <= pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}
		if (i<pivotIndex && j>pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
	if (start >= end) {
		return;
	}

	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}

// ¼¿ Á¤·Ä
void shellSort(int arr[], int n) {
	for (int i = n / 2; i > 0; i /= 2) {
		for (int j = i; j < n; j += 1) {
			int temp = arr[j];
			int k;
			for (k = j; k >= i && arr[k - i] > temp; k -= i) {
				arr[k] = arr[k - i];
			}
			arr[k] = temp;
		}
	}
}


// Èü Á¤·Ä
void heapify(int arr[], int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left<n && arr[left]>arr[largest]) {
		largest = left;
	}
	if (right<n && arr[right]>arr[largest]) {
		largest = right;
	}
	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}


int main() {
	//int n;
	//cin >> n;
	//int* arr = new int[n];
	//for (int i = 0; i < n; i++) {
	//	cin >> arr[i];
	//}

	////mergeSort(arr, 0, n - 1);
	////quickSort(arr, 0, n - 1);
	////sort(arr, arr + n);
	////shellSort(arr, n);
	////heapSort(arr, n);
	//sort(arr, arr + n);

	//for (int i = 0; i < n; i++) {
	//	if (i + 1 < n && arr[i] == arr[i + 1]) {
	//		continue;
	//	}
	//	cout << arr[i] << endl;
	//}

	//delete[] arr;

	//return 0;

	int n, tmp;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		cout << a[i] << '\n';
	}
	return 0;
}