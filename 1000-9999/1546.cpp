#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int cnt;
	cin >> cnt;

	float *arr = new float[cnt];
	float max = 0;

	for (int i = 0; i < cnt; i++) {
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0; i < cnt; i++) {
		arr[i] = arr[i] * 100 / max;
	}

	float sum = 0;
	for (int i = 0; i < cnt; i++) {
		sum += arr[i];
	}

	cout << sum / (float)cnt;

	return 0;
}