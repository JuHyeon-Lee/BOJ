#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	cin >> s;
	
	int cnt[26];
	for(int i=0; i<26; i++){
		cnt[i] = 0;
	}
	
	for(int i=0; i<s.length(); i++){
		int c = s[i];
		if(c>96) c-=32;
		cnt[c-65]++;
	}
	
	int max_cnt = 0;
	char max_char = '?';
	for(int i=0; i<26; i++){
		if(cnt[i]>max_cnt){
			max_cnt = cnt[i];
			max_char = i+65;
		} else if (cnt[i]==max_cnt){
			max_char = '?';
		}
	}
	
	printf("%c", max_char);
	
	return 0;
}