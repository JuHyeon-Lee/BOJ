#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	stack<int> st;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int n;
			cin >> n;
			st.push(n);
		}
		if (s == "pop") {
			if (st.empty()) cout << -1 << endl;
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		if (s == "top") {
			if (st.empty()) cout << -1 << endl;
			else cout << st.top() << endl;
		}
		if (s == "size")
			cout << st.size() << endl;
		if (s == "empty")
			cout << st.empty() << endl;

	}

	return 0;
}