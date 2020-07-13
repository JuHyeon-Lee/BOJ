#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> v;

string map1[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB" };

string map2[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW" };

int cntMap(int N, int M) {
	int min = 65;
	for (int a = 0; a < N - 7; a++) {
		for (int b = 0; b < M - 7; b++) {
			int cnt1 = 0;
			int cnt2 = 0;
			for (int i = a; i < a + 8; i++) {
				for (int j = b; j < b + 8; j++) {
					if (v[i][j] != map1[i - a][j - b]) cnt1++;
					if (v[i][j] != map2[i - a][j - b]) cnt2++;
				}
			}
			if (cnt1 < min) min = cnt1;
			if (cnt2 < min) min = cnt2;
		}
	}
	return min;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	cout << cntMap(N, M) << endl;

	return 0;
}