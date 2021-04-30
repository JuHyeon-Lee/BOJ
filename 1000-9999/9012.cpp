#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	while(T--){
		string str;
		cin >> str;
		
		stack<char> s;
		for(int i=0; i<str.length(); i++){
			if(str[i]=='(') s.push('(');
			else if(str[i]==')'){
				if(!s.empty() && s.top()=='(') s.pop();
				else s.push(')');
			} 
		}
		
		if(s.empty()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	
	return 0;
}