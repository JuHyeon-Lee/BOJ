#include <iostream>
#include <vector>

using namespace std;

int N;
bool visit[10];

void printAll(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

void perm(vector<int> tmp, int cnt) {
	if (cnt == N + 1) {
		printAll(tmp);
		return;
	}

	for (int i = 1; i <= N; i++) {
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
	scanf("%d", &N);

	vector<int> tmp;
	perm(tmp, 1);

	return 0;
}