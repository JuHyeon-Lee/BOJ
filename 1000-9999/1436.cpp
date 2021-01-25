#include <iostream>
#include <string>

using namespace std;

bool check(int num){
	string s = to_string(num);
	for(int i=0; i<=s.length()-3; i++){
		if(s.substr(i, 3)=="666") return true;
	}
	return false;
}

int main(){
	
	int N;
	scanf("%d", &N);
	
	int cnt = 0;
	int num = 100;
	while(cnt<N){
		num++;
		if(check(num)) cnt++;
	}
	
	printf("%d\n", num);
	
	return 0;
}