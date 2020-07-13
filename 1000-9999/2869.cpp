#include <iostream>
#include <math.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long A, B, V;
	cin >> A >> B >> V;

	cout << (V - B - 1) / (A - B) + 1 << endl;

	return 0;
}