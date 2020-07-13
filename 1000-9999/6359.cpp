#include <iostream>
#include <math.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << (int)sqrt(n) << endl;
	}

	return 0;
}