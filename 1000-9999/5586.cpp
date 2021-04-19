#include <iostream>
#include <string>

using namespace std;

int cnt_JOI, cnt_IOI;

int main(){
	
	string s;
	cin >> s;
	
	for(int i=0; i<s.length()-2; i++){
		if(s[i]=='J' && s[i+1]=='O' && s[i+2]=='I') cnt_JOI++;
		if(s[i]=='I' && s[i+1]=='O' && s[i+2]=='I') cnt_IOI++;
	}
	
	printf("%d\n%d\n", cnt_JOI, cnt_IOI);
	
	return 0;
}