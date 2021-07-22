#include <iostream>

using namespace std;

int amount2(int a) {
    int val = a;
    int cnt = 0;
    while (val > 0) {
        val /= 2;
        cnt += val;
    }
    return cnt;
}

int amount5(int a) {
    int val = a;
    int cnt = 0;
    while (val > 0) {
        val /= 5;
        cnt += val;
    }
    return cnt;
}

int main(void) {
    int n, m;
    cin >> n >> m;
	
    int num2 = amount2(n) - amount2(m) - amount2(n - m);
    int num5 = amount5(n) - amount5(m) - amount5(n - m);
	
	cout << min(num2, num5) << "\n";
}