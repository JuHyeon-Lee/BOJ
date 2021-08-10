#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	string ans;
	int N;
	cin >> ans >> N;
	
	int cnt = 0;
	while(N--){
		string s;
		cin >> s;
		
		s += s;
		
		for(int i=0; i<=s.length()-ans.length(); i++){
			bool same = true;
			for(int j=0; j<ans.length(); j++){
				if(ans[j]!=s[j+i]){
					same = false;
					break;
				}
			}
			if(same){
				cnt++;
				break;
			}
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}