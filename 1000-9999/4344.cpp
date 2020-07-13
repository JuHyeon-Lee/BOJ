#include <iostream>

using namespace std;

int main() {

	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		int tmp;
		cin >> tmp;
		int *arr = new int[tmp];

		for (int j = 0; j < tmp; j++) {
			cin >> arr[j];
		}

		float sum = 0;
		for (int j = 0; j < tmp; j++) {
			sum += arr[j];
		}

		float avg = sum / (float)tmp;

		float top = 0;
		for (int j = 0; j < tmp; j++) {
			if (arr[j] > avg)
				top += 1;
		}

		cout.setf(ios::fixed);
		cout.precision(3);
		cout << top / tmp * 100 << "%" << endl;
	}

	return 0;
}