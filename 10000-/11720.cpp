#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt; char c; int sum = 0;
	cin >> cnt;
	for (int i = 0; i<cnt; i++) {
		cin >> c;
		sum = sum + c - '0';
	}
	cout << sum;
}