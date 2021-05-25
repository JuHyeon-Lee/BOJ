#include <iostream>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int e, f, c;
	cin >> e >> f >> c;
	
	int sum = e + f;
	int cnt = 0;
	while(sum>=c){
		int new_coke = sum/c;
		sum %= c;
		sum += new_coke;
		cnt += new_coke;
	}
	
	cout << cnt << endl;
	
	return 0;
}