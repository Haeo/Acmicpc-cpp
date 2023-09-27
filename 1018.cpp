#include<iostream>
#include<algorithm>
using namespace std;

int arr[51][51];

int Count(int x, int y)
{
	int count1 = 0;
	int count2 = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == arr[i][j]) 
				count1++;
			if ((i + j + 1) % 2 == arr[i][j]) 
				count2++;
		}
	}

	return min(count1, count2);
}

int main()
{
	int N, M;
	int min = 10000;
	char c;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> c;
			if (c == 'B') 
				arr[i][j] = 0;
			else 
				arr[i][j] = 1;
		}
	}

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			if (min > Count(i, j)) min = Count(i, j);
		}
	}

	cout << min;
}