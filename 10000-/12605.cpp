#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N >> ws;
	
	for(int i=1; i<=N; i++){
		string s;
		getline(cin, s);
		
		stack<string> st;
		string tmp = "";
		for(int j=0; j<s.length(); j++){
			if(s[j]==' '){
				st.push(tmp);
				tmp = "";
			} else {
				tmp += s[j];
			}
		}
		st.push(tmp);
		
		cout << "Case #" << i << ": ";
		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}
		cout << "\n";
	}
	
	return 0;
}