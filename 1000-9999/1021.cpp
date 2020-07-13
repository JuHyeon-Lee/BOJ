#include <iostream>
#include <deque>

using namespace std;

int findleft(deque<int> d, int n) {
	int cnt = 0;
	while (d.front() != n) {
		d.push_back(d.front());
		d.pop_front();
		cnt++;
	}
	return cnt;
}

int findright(deque<int> d, int n) {
	int cnt = 0;
	while (d.front() != n) {
		d.push_front(d.back());
		d.pop_back();
		cnt++;
	}
	return cnt;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	deque<int> d;
	for (int i = 0; i < N; i++) {
		d.push_back(i + 1);
	}

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		int a = findleft(d, n);
		int b = findright(d, n);
		if (a < b) {
			while (d.front() != n) {
				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}
			d.pop_front();
		}
		else {
			while (d.front() != n) {
				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}
			d.pop_front();
		}
	}

	cout << cnt << endl;

	return 0;
}