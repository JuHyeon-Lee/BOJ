#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	cout << M*N - 1 << endl;

	return 0;
}