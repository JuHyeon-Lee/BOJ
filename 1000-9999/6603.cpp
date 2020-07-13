#include <iostream>
#include <vector>

using namespace std;

void comb(vector<int> v, vector<int> tmp, int cur, int cnt) {
	if (cnt == 7) {
		for (int i = 0; i < tmp.size(); i++) {
			cout << tmp[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = cur; i < v.size() - 6 + cnt; i++) {
		tmp.push_back(v[i]);
		comb(v, tmp, i + 1, cnt + 1);
		tmp.pop_back();
	}
}

int main() {
	while (true) {
		int k;
		scanf("%d", &k);

		if (k == 0)
			break;

		vector<int> v;
		for (int i = 0; i < k; i++) {
			int n;
			cin >> n;
			v.push_back(n);
		}

		vector<int> tmp;
		comb(v, tmp, 0, 1);

		cout << endl;
	}

	return 0;
}