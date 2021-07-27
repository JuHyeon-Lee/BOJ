#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	getline(cin, s);
	
	for(int i=0; i<s.length(); i++){
		char c = s[i];
		cout << c;
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') i += 2;
	}
	
	return 0;
}