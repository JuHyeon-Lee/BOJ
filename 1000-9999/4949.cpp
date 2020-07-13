#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	std::ios::sync_with_stdio(0);

	while (1) {
		string str;
		getline(cin, str, '\n');

		if (str[0] == '.') break;

		stack<int> s;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') s.push('(');
			if (str[i] == '[') s.push('[');
			if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop();
				else s.push(')');
			}
			if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else s.push(']');
			}
		}

		if (s.empty()) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}