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

void perm(vector<int> tmp, int cnt) {
	if (cnt == M) {
		printAll(tmp);
		return;
	}

	for (int i = 1; i <= N; i++) {
		tmp.push_back(i);
		perm(tmp, cnt + 1);
		tmp.pop_back();
	}
}

int main() {
	scanf("%d%d", &N, &M);

	vector<int> tmp;
	perm(tmp, 0);

	return 0;
}