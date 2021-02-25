#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	cin.ignore();
	
	while(T--){
		string s;
		getline(cin, s);
		
		s += ' ';
		
		stack<char> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]==' '){
				while(!st.empty()){
					cout << st.top();
					st.pop();
				}
				cout << " ";
			} else{
				st.push(s[i]);
			}
		}
		
		cout << endl;
	}
	
	return 0;
}