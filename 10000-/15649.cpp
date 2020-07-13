#include <iostream>
#include <vector>

using namespace std;

int M, N;
vector<bool> visit;

void printAll(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

void perm(vector<int> tmp, int cnt) {
	if (cnt == N) {
		printAll(tmp);
		return;
	}
	for (int i = 1; i <= M; i++) {
		if (!visit[i]) {
			tmp.push_back(i);
			visit[i] = true;
			perm(tmp, cnt + 1);
			tmp.pop_back();
			visit[i] = false;
		}
	}
}

int main() {
	scanf("%d%d", &M, &N);

	visit.push_back(false);
	for (int i = 1; i <= M; i++) {
		visit.push_back(false);
	}

	vector<int> tmp;
	perm(tmp, 0);

	return 0;
}