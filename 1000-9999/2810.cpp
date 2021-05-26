#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	string s;
	cin >> n >> s;
	
	int cnt = 1;
	bool flag = false;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='S') cnt++;
		else if(s[i]=='L'){
			if(flag){
				cnt++;
				flag = false;
			} else {
				flag = true;
			}
		}
	}
	
	cout << min(n, cnt) << "\n";
	
	return 0;
}