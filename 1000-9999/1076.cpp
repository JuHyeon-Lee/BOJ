#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	map<string, pair<long long, long long>> m;
	m["black"] = { 0,1 };
	m["brown"] = { 1,10 };
	m["red"] = { 2,100 };
	m["orange"] = { 3,1000 };
	m["yellow"] = { 4,10000 };
	m["green"] = { 5,100000 };
	m["blue"] = { 6,1000000 };
	m["violet"] = { 7,10000000 };
	m["grey"] = { 8,100000000 };
	m["white"] = { 9,1000000000 };

	string c1, c2, c3;
	cin >> c1 >> c2 >> c3;
	long long ans = (m[c1].first * 10 + m[c2].first)*m[c3].second;
	cout << ans << endl;

	return 0;
}