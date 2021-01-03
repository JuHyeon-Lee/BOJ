#include <iostream>
#include <cstring>

using namespace std;

bool han(int x){
	string str = to_string(x);
	
	if(str.length()==1) return true;
	
	int diff = str[1] - str[0];
	for(int i=1; i<str.length()-1; i++){
		int diff2 = str[i+1] - str[i];
		if(diff!=diff2) return false;
	}
	
	return true;
}

int main(){
	
	int N;
	scanf("%d", &N);
	
	int cnt = 0;
	for(int i=1; i<=N; i++){
		if(han(i)) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}