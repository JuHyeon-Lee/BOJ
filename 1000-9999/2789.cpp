#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	cin >> s;
	
	string output = "";
	for(int i=0; i<s.length(); i++){
		if(s[i]=='C'||s[i]=='A'||s[i]=='M'||s[i]=='B'||s[i]=='R'||s[i]=='I'||s[i]=='D'||s[i]=='G'||s[i]=='E') continue;
		output += s[i];
	}
	
	cout << output << endl;
	
	return 0;
}