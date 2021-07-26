#include <iostream>

using namespace std;

int main(){
	
	int K;
	cin >> K;
	
	int A = 1;
	int B = 0;
	
	while(K--){
		int A2 = B;
		int B2 = A + B;
		
		A = A2;
		B = B2;
	}
	
	cout << A << " " << B << "\n";
	
	return 0;
}