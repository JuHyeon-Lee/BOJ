#include <iostream>

using namespace std;

int main() {
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;

	int min = 2001;
	int sum = 0;

	if (A < min)
		min = A;
	if (B < min)
		min = B;
	if (C < min)
		min = C;

	sum += min;
	min = 2001;

	if (D < min)
		min = D;
	if (E < min)
		min = E;

	sum += min;
	sum -= 50;

	cout << sum << endl;

	return 0;
}