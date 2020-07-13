#include <iostream>
#include <queue>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (true) {

		if (q.size() == 1) {
			cout << q.front() << endl;
			break;
		}

		q.pop();
		q.push(q.front());
		q.pop();
	}

	return 0;
}