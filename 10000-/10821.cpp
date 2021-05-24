#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	string s;
	cin >> s;
	
	int cnt = 1;
	for(int i=0; i<s.length(); i++){
		if(s[i]==',') cnt++;
	}
	
	cout << cnt << "\n";
	
	return 0;
}