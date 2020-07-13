#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	cout << a*(b % 10) << endl;
	cout << a*(b / 10 % 10) << endl;
	cout << a*(b / 100) << endl;
	cout << a*b << endl;

	return 0;
}