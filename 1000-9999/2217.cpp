#include <iostream>
#include <queue>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, less<int>> pq;

	for (int i = 0; i < N; i++) {
		int w;
		cin >> w;
		pq.push(w);
	}

	int max = 0;
	for (int i = 0; i < N; i++) {
		int n = pq.top();
		if (max < n*(i + 1))
			max = n*(i + 1);
		pq.pop();
	}

	cout << max << endl;


	return 0;
}