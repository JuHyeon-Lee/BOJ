#include <iostream>
#include <math.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long A, B, C;
	cin >> A >> B >> C;

	if (B >= C) cout << -1 << endl;
	else cout << A / (C - B) + 1 << endl;

	return 0;
}