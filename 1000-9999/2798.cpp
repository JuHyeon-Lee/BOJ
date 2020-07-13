#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> num;
vector<int> tmp;
int most = 0;

void func(int idx) {

	if (tmp.size() == 3) {
		int sum = tmp[0] + tmp[1] + tmp[2];
		//cout << tmp[0] << " " << tmp[1] << " " << tmp[2] << endl;
		if (M - sum < M - most&&M - sum >= 0) most = sum;
		return;
	}

	for (int i = idx; i < num.size(); i++) {
		tmp.push_back(num[i]);
		func(i + 1);
		tmp.pop_back();
	}

}

int main() {
	std::ios::sync_with_stdio(false);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		num.push_back(n);
	}

	func(0);

	cout << most << endl;

	return 0;
}