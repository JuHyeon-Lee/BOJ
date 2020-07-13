#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int  N;
	cin >> N;

	int min = 1000000;
	int max = -1000000;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		if (min > n) min = n;
		if (max < n) max = n;
	}

	cout << min << " " << max << endl;

	return 0;
}