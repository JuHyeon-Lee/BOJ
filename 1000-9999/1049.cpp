#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	int cheap6 = 6001;
	int cheap1 = 1001;

	for (int i = 0; i < M; i++) {
		int p, e;
		cin >> p >> e;
		if (p < cheap6) cheap6 = p;
		if (e < cheap1) cheap1 = e;
	}

	if (N < 6) {
		if (cheap1*N > cheap6)
			cout << cheap6 << endl;
		else
			cout << cheap1*N << endl;
	}
	else {
		if (cheap1 * 6 < cheap6)
			cout << N*cheap1 << endl;
		else if (cheap1*(N % 6)>cheap6)
			cout << cheap6*(N / 6 + 1) << endl;
		else
			cout << cheap6*(N / 6) + cheap1*(N % 6) << endl;

	}


	return 0;
}