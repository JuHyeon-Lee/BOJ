#include <iostream>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;
	
	int total = 0;
	if(A<0){
		total += A * C * -1;
		total += D;
		total += B * E;
	} else {
		total += (B - A) * E;
	}
	
	cout << total << endl;
	
	return 0;
}