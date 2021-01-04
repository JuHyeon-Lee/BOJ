#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	getline(cin, s);
	
	int cnt = 1;
	for(int i=0; i<s.length(); i++){
		if(s[i]==' '){
			if(i!=0 && i!=s.length()-1){
				cnt++;
			}
		}
	}
	
	if(s==" " || s=="") cnt = 0;
	
	printf("%d", cnt);
	
	return 0;
}