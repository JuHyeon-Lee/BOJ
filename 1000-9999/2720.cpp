#include <iostream>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int C;
		cin >> C;
		
		cout << C / 25 << " ";
		C %= 25;
		
		cout << C / 10 << " ";
		C %= 10;
		
		cout << C / 5 << " ";
		C %= 5;
		
		cout << C << "\n";
	};
	
	return 0;
}