#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T = 3;
	while(T--){
		string s;
		cin >> s;
		
		int cnt = 1;
		int max_cnt = 1;
		char before = '0';
		
		for(int i=0; i<s.length(); i++){
			if(s[i]==before){
				cnt++;
				if(max_cnt<cnt) max_cnt = cnt;
			} else {
				before = s[i];
				cnt = 1;
			}
		}
		
		cout << max_cnt << "\n";
	}
	
	return 0;
}