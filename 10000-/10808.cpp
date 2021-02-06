#include <iostream>
#include <string>

using namespace std;

int cnt[26];

int main(){
	
	string s;
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		cnt[s[i]-97]++;
	}
	
	for(int i=0; i<26; i++){
		printf("%d ", cnt[i]);
	}
	printf("\n");
	
	return 0;
}