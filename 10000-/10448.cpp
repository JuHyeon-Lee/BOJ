#include <iostream>
#include <vector>

using namespace std;

vector<int> num;
vector<int> tmp;
bool flag;

void func(int idx, int target) {
	if (tmp.size() == 3) {
		//cout << tmp[0] << " " << tmp[1] << " " << tmp[2] << endl;
		if (tmp[0] + tmp[1] + tmp[2] == target) flag = true;
		return;
	}

	for (int i = idx; i < num.size(); i++) {
		tmp.push_back(num[i]);
		func(i, target);
		tmp.pop_back();
	}
}

int main() {
	std::ios::sync_with_stdio(false);

	int sum = 0;
	for (int i = 1; i < 45; i++) {
		sum += i;
		num.push_back(sum);
	}

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tar;
		cin >> tar;
		flag = false;
		func(0, tar);
		cout << flag << endl;
	}

	return 0;
}