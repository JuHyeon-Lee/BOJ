#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	if (N == 1) cout << 1 << endl;
	else if (N == 2) cout << min(4, (M + 1) / 2) << endl;
	else if (M < 7) cout << min(4, M) << endl;
	else cout << M - 2 << endl;

	return 0;
}