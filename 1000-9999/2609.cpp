#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	int A, B;
	cin >> A >> B;

	int g, l;
	
	g = gcd(A, B);
	l = g * (A / g) * (B / g);

	cout << g << endl << l << endl;

	return 0;
}