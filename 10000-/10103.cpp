#include <iostream>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	
	int scoreA = 100;
	int scoreB = 100;
	
	while(n--){
		int a, b;
		cin >> a >> b;
		if(a>b) scoreB -= a;
		if(a<b) scoreA -= b;
	}
	
	cout << scoreA << "\n" << scoreB << "\n";
	
	return 0;
}