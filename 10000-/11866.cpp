#include <iostream>
#include <queue>

using namespace std;

int main() {

	int N, K;
	cin >> N >> K;
	queue<int> q;
	for (int i = 0; i < N; i++) {
		q.push(i + 1);
	}

	int i = 1;
	cout << "<";
	while (!q.empty()) {
		if (i%K == 0) {
			cout << q.front();
			if (q.size() != 1) cout << ", ";
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		i++;
	}
	cout << ">" << endl;

	return 0;
}