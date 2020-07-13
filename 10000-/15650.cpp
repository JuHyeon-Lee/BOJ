#include <iostream>
#include <vector>

using namespace std;

int N, M;

void printAll(vector<int> tmp) {
	for (int i = 0; i < tmp.size(); i++) {
		printf("%d ", tmp[i]);
	}
	printf("\n");
}

void comb(vector<int> tmp, int cur, int cnt) {
	if (cnt == M) {
		printAll(tmp);
		return;
	}

	for (int i = cur; i <= N; i++) {
		tmp.push_back(i);
		comb(tmp, i + 1, cnt + 1);
		tmp.pop_back();
	}
}

int main() {
	scanf("%d%d", &N, &M);

	vector<int> tmp;
	comb(tmp, 1, 0);

	return 0;
}