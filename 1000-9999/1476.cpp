#include <iostream>
#include <vector>

using namespace std;

int main() {

	std::ios::sync_with_stdio(false);

	int E, S, M;
	cin >> E >> S >> M;

	int num = 0;

	while (1) {
		int curE, curS, curM;
		curE = num % 15 + 1;
		curS = num % 28 + 1;
		curM = num % 19 + 1;

		if ((curE == E) && (curS == S) && (curM == M)) {
			cout << num + 1 << endl;
			break;
		}

		num++;
	}

	return 0;
}