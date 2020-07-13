#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	map<char, int> m;
	m['A'] = 3; m['B'] = 3; m['C'] = 3;
	m['D'] = 4; m['E'] = 4; m['F'] = 4;
	m['G'] = 5; m['H'] = 5; m['I'] = 5;
	m['J'] = 6; m['K'] = 6; m['L'] = 6;
	m['M'] = 7; m['N'] = 7; m['O'] = 7;
	m['P'] = 8; m['Q'] = 8; m['R'] = 8; m['S'] = 8;
	m['T'] = 9; m['U'] = 9; m['V'] = 9;
	m['W'] = 10; m['X'] = 10; m['Y'] = 10; m['Z'] = 10;

	string s;
	cin >> s;

	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += m[s[i]];
	}

	cout << sum << endl;

	return 0;
}