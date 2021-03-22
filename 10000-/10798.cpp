#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	vector<string> v;
	
	int max = 0;
	for(int i=0; i<5; i++){
		string s;
		cin >> s;
		v.push_back(s);
		if(max<s.length()) max = s.length();
	}
	
	string ans = "";
	for(int i=0; i<max; i++){
		for(int j=0; j<5; j++){
			if(v[j].length()>i) printf("%c", v[j][i]);
		}
	}
	
	return 0;
}