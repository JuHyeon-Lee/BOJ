#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	if (a > b) cout << ">" << endl;
	if (a < b) cout << "<" << endl;
	if (a == b) cout << "==" << endl;

	return 0;
}