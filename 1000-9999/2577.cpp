#include <iostream>
#include <string>

using namespace std;

int num[10];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;

	int mul = A*B*C;
	string s = to_string(mul);
	for (int i = 0; i < s.length(); i++) {
		num[s[i] - 48]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << endl;
	}

	return 0;
}