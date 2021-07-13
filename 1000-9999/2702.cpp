#include <iostream>

using namespace std;

int gcd(int p, int q){
	if(q==0) return p;
	return gcd(q, p%q);
}

int lcm(int p, int q){
	return p * q / gcd(p,q);
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int a, b;
		cin >> a >> b;
		
		cout << lcm(a, b) << " " << gcd(a, b) << "\n";
	}
	
	return 0;
}