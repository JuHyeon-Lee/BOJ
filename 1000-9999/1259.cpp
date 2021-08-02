#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	while(true){
		string s;
		cin >> s;
		
		if(s[0]=='0') break;
		
		int l = s.length();
		bool res = true;
		for(int i=0; i<l/2; i++){
			if(s[i]!=s[l-i-1]){
				res = false;
				break;
			}
		}
		
		if(res) cout << "yes\n";
		else cout << "no\n";
	}
	
	
	return 0;
}