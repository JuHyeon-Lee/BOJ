#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N;
bool visit[11];
vector<vector<int>> dis;

int minVal = 2000000000;

void calc(vector<int> tmp) {
	tmp.push_back(tmp[0]);

	int totalDis = 0;
	for (int i = 0; i < tmp.size() - 1; i++) {
		if (dis[tmp[i]][tmp[i + 1]] == 0)
			return;
		totalDis += dis[tmp[i]][tmp[i + 1]];
	}

	if (minVal > totalDis)
		minVal = totalDis;
}

void perm(vector<int> tmp, int cnt) {
	if (cnt == N) {
		calc(tmp);
		return;
	}

	for (int i = 0; i < N; i++) {
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

	for (int i = 0; i < N; i++) {
		vector<int> tmp;
		for (int j = 0; j < N; j++) {
			int num;
			scanf("%d", &num);
			tmp.push_back(num);
		}
		dis.push_back(tmp);
	}

	vector<int> tmp;
	perm(tmp, 0);

	printf("%d\n", minVal);

	return 0;
}