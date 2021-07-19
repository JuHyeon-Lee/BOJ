#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	while(true){
		string s;
		getline(cin, s);
		
		if(s=="END") break;
		
		for(int i=s.length()-1; i>=0; i--){
			cout << s[i];
		}
		cout << "\n";
	}
	
	return 0;
}