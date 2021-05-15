#include <iostream>

using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b){
	return (a*b)/gcd(a,b);
}

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int A, B;
		cin >> A >> B;
		cout << lcm(A, B) << "\n";
	}
	
	return 0;
}