#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {

	int T;
	cin >> T;

	while (T--) {
		int A, B;
		cin >> A >> B;

		int g = gcd(A, B);
		cout << g * (A / g) * (B / g) << endl;
	}

	return 0;
}