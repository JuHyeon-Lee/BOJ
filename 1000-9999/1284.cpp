#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	while(true){
		string s;
		cin >> s;
		
		if(s=="0") break;
		
		int cnt = 1;
		for(int i=0; i<s.length(); i++){
			switch(s[i]){
				case '0':
					cnt += 4;
					break;
				case '1':
					cnt += 2;
					break;
				default:
					cnt += 3;
					break;
			}
			cnt++;
		}
		
		cout << cnt << "\n";
	}
	
	return 0;
}