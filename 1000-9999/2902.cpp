#include <iostream>
#include <string>

using namespace std;

int main() {

	std::ios::sync_with_stdio(false);

	string str;
	getline(cin, str);

	cout << str[0];
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '-')
			cout << str[i + 1];
	}

	return 0;
}