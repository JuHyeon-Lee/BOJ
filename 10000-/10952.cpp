#include <iostream>
#include <vector>

using namespace std;

int main() {

	std::ios::sync_with_stdio(false);

	int A, B;
	cin >> A >> B;

	while ((A != 0) && (B != 0)) {
		cout << A + B << endl;
		cin >> A >> B;
	}

	return 0;
}