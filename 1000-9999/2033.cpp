#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	
	int i = 0;
	while(i+1<s.length()){
		if(s[i]-48>=5){
			if(i+1==s.length()) s += '1';
			else s[i+1] += 1;
		}
		s[i] = '0';
		i++;
	}
	
	if(s[s.length()-1]>'9'){
		s[s.length()-1] = '0';
		s += '1';
	}
	
	reverse(s.begin(), s.end());
	
	cout << s;
	
	return 0;
}