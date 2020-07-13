#include <iostream>

using namespace std;

int pib[46];

int getPib(int n) {
	if (n == 0) return 0;
	if (pib[n] != 0) return pib[n];

	pib[n] = getPib(n - 1) + getPib(n - 2);
	return pib[n];
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	pib[0] = 0;
	pib[1] = 1;

	int n;
	cin >> n;
	cout << getPib(n) << endl;

	return 0;
}