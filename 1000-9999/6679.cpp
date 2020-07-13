#include <iostream>

using namespace std;

bool func(int n) {

	int d1 = n / 1000;
	int d2 = n / 100 % 10;
	int d3 = n / 10 % 10;
	int d4 = n % 10;

	int h1 = n / 16 / 16 / 16;
	int h2 = n / 16 / 16 % 16;
	int h3 = n / 16 % 16;
	int h4 = n % 16;

	int t1 = n / 12 / 12 / 12;
	int t2 = n / 12 / 12 % 12;
	int t3 = n / 12 % 12;
	int t4 = n % 12;

	if ((d1 + d2 + d3 + d4 == h1 + h2 + h3 + h4) && (d1 + d2 + d3 + d4 == t1 + t2 + t3 + t4)) return true;
	else return false;
}

int main() {
	std::ios::sync_with_stdio(false);

	for (int i = 1000; i < 10000; i++) {
		if (func(i)) cout << i << endl;
	}

	return 0;
}