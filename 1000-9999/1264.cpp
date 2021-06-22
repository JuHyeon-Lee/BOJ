#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	while(true){
		string s;
		getline(cin, s);
		
		if(s[0]=='#') break;
		
		int cnt = 0;
		for(int i=0; i<s.length(); i++){
			char c = s[i];
			if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U') cnt++;
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') cnt++;
		}
		
		cout << cnt << endl;
	}
	
	return 0;
}