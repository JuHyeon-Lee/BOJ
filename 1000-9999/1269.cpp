#include <iostream>
#include <set>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int A, B;
	cin >> A >> B;

	set<int> s;
	for (int i = 0; i < A; i++) {
		int n;
		cin >> n;
		s.insert(n);
	}

	for (int i = 0; i < B; i++) {
		int n;
		cin >> n;
		if (s.find(n) == s.end()) s.insert(n);
		else s.erase(n);
	}

	cout << s.size() << endl;

	return 0;
}