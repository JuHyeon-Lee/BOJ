#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N;
vector<int> v;
bool visit[10];

int maxVal = -2000000000;

void calc(vector<int> tmp) {
	int res = 0;
	for (int i = 0; i < tmp.size() - 1; i++) {
		res += abs(tmp[i] - tmp[i + 1]);
	}
	if (res > maxVal)
		maxVal = res;
}

void perm(vector<int> tmp, int cnt) {
	if (cnt == N) {
		calc(tmp);
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!visit[i]) {
			tmp.push_back(v[i]);
			visit[i] = true;
			perm(tmp, cnt + 1);
			tmp.pop_back();
			visit[i] = false;
		}
	}
}

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	vector<int> tmp;
	perm(tmp, 0);

	printf("%d\n", maxVal);

	return 0;
}