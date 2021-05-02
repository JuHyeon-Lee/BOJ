#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	while(true){
		string str;
		getline(cin, str);
		
		if(str.length()==1 && str[0]=='.') break;
		
		stack<char> s;
		
		for(int i=0; i<str.length(); i++){
			char c = str[i];
			
			if(c=='('){
				s.push('(');
			} else if (c==')'){
				if(!s.empty() && s.top()=='(') s.pop();
				else s.push(')');
			} else if (c=='['){
				s.push('[');
			} else if (c==']'){
				if(!s.empty() && s.top()=='[') s.pop();
				else s.push(']');
			}
		}
		
		if(s.empty()) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	
	return 0;
}