#include <iostream>
#include <vector>

using namespace std;

int main() {

	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		int A, B;
		cin >> A >> B;
		cout << A + B << endl;
	}

	return 0;
}