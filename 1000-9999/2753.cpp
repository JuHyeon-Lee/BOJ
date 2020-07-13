#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a;
	cin >> a;

	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) cout << 1 << endl;
	else cout << 0 << endl;

	return 0;
}