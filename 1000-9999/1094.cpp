#include <iostream>

using namespace std;

int main(){
	
	int X;
	cin >> X;
	
	int cnt = 1;
	while(X>1){
		cnt += X % 2;
		X /= 2;
	}
	
	cout << cnt << "\n";
	
	return 0;
}