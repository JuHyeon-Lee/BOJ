#include <iostream>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int cnt = 0;
	int max = 0;
	for(int i=0; i<10; i++){
		int out, in;
		cin >> out >> in;
		
		cnt -= out;
		cnt += in;
		
		if(cnt>max) max = cnt;
	}
	
	cout << max << "\n";
	
	return 0;
}