#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(0);

	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;

		stack<char> st;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ')') {
				if (!st.empty() && st.top() == '(') st.pop();
				else st.push(')');
			}
			else st.push('(');
		}

		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}