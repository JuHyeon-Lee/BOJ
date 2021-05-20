#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	string s;
	cin >> s;
	
	int result = 0;
	int minus = 0;
	string num = "";
	bool positive = true;
	for(int i=0; i<s.length(); i++){
		if(s[i]!='+' && s[i]!='-'){
			num += s[i];
		} else {
			if(positive) result += stoi(num);
			else minus += stoi(num);
			num = "";
			
			if(s[i]=='-') {
				positive = false;
				result -= minus;
				minus = 0;
			}
		}
	}
	
	if(positive){
		result += stoi(num);
	} else {
		minus += stoi(num);
		result -= minus;
	}
	
	cout << result << "\n";
	
	return 0;
}