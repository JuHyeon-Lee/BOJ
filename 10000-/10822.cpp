#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	string s;
	cin >> s;
	
	int answer = 0;
	string num = "";
	for(int i=0; i<s.length(); i++){
		if(s[i]==','){
			answer += atoi(num.c_str());
			num = "";
		} else {
			num += s[i];
		}
	}
	answer += atoi(num.c_str());
	
	cout << answer << "\n";
	
	return 0;
}