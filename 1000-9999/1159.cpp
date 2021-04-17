#include <iostream>
#include <string>

using namespace std;

int cnt[26];

int main(){
	
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		string s;
		cin >> s;
		cnt[s[0]-97]++;
	}
	
	string result = "";
	for(int i=0; i<26; i++){
		if(cnt[i]>=5) result += (char)(i+97);
	}
	
	if(result=="") result = "PREDAJA";
	
	cout << result << endl;
	
	return 0;
}