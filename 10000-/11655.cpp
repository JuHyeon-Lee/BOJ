#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	getline(cin, s);
	
	for(int i=0; i<s.length(); i++){
		if((s[i]>=65&&s[i]<=77)||(s[i]>=97&&s[i]<=109)){
			s[i] += 13;
		} else if((s[i]>=78&&s[i]<=90)||(s[i]>=110&&s[i]<=122)){
			s[i] -= 13;
		}
	}
	
	cout << s << endl;
	
	return 0;
}