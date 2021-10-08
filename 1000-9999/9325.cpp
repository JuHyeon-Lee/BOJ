#include <iostream>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int t;
	cin >> t;
	while(t--){
		int s, n;
		cin >> s >> n;
		
		for(int i=0; i<n; i++){
			int q, p;
			cin >> q >> p;
			s += q * p;	
		}
		
		cout << s << "\n";
	}
	
	return 0;
}