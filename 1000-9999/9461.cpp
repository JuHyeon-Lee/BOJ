#include <iostream>

using namespace std;

long long pado[101];

long long getPado(int n) {
	if (pado[n] != 0) return pado[n];
	return pado[n] = getPado(n - 1) + getPado(n - 5);
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	pado[1] = 1;
	pado[2] = 1;
	pado[3] = 1;
	pado[4] = 2;
	pado[5] = 2;

	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		cout << getPado(N) << endl;
	}

	return 0;
}