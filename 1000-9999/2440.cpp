#include <iostream>
using namespace std;

int main() {

	int num, cnt = 0;

	cin >> num;

	while (num) {
		cnt = num;
		while (cnt--) {
			cout << "*";
		}
		cout << endl;
		--num;
	}

	return 0;
}