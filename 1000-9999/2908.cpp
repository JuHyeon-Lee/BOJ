#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;

	string s1_flip, s2_flip;
	for (int i = 2; i >= 0; i--) {
		s1_flip += s1[i];
		s2_flip += s2[i];
	}

	int a = stoi(s1_flip);
	int b = stoi(s2_flip);

	if (a > b) cout << a << endl;
	else cout << b << endl;

	return 0;
}