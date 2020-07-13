#include <iostream>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	string A, B;
	cin >> A >> B;

	long long sum = 0;
	for (int i = 0; i < A.length(); i++) {
		for (int j = 0; j < B.length(); j++) {
			sum += (A[i] - 48)*(B[j] - 48);
		}
	}

	cout << sum << endl;

	return 0;
}