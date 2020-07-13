#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	string s;
	cin >> s;

	priority_queue<int> pq;
	for (int i = 0; i < s.length(); i++) {
		pq.push(s[i] - 48);
	}

	int sum = 0;
	string s2 = "";
	while (!pq.empty()) {
		sum += pq.top();
		s2 += to_string(pq.top());
		pq.pop();
	}

	if (sum % 3 != 0) cout << -1 << endl;
	else {
		if (s2[s2.length() - 1] != '0') cout << -1 << endl;
		else cout << s2 << endl;
	}

	return 0;
}