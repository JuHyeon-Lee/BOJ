#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	long long pac = 1;
	for (int i = N; i > 1; i--) {
		pac *= i;
	}

	cout << pac << endl;

	return 0;
}