#include <iostream>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		int min = 100;
		int max = 0;
		
		while(n--){
			int x;
			cin >> x;
			if(x < min) min = x;
			if(x > max) max = x;
		}
		
		cout << (max - min) * 2 << "\n";
	}
	
	return 0;
}