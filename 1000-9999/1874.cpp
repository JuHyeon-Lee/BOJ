#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main() {

	int cnt;
	vector<int> v;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		int tmp;
		scanf("%d", &tmp);
		v.push_back(tmp);
	}

	stack<int> s;
	vector<char> rec;

	int n = 1;
	int idx = 0;
	while (n <= cnt) {
		s.push(n);
		rec.push_back('+');
		while (v[idx] == s.top()) {
			//cout << s.top();
			s.pop();
			rec.push_back('-');
			idx++;
			if (s.empty())
				break;
		}
		n++;
	}

	if (idx != cnt) {
		printf("NO\n");
	}
	else {
		for (char c : rec) {
			printf("%c\n", c);
		}
	}


	return 0;
}