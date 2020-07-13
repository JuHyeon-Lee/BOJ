#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> v;
		
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			v.push_back(num);
		}

		long long sum = 0;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(v[i], v[j]);
			}
		}

		cout << sum << endl;
	}

	return 0;
}