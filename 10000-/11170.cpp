#include <iostream>
#include <string>

using namespace std;

int count(int num){
	int cnt = 0;
	string s = to_string(num);
	for(int i=0; i<s.length(); i++){
		if(s[i]=='0') cnt++;
	}
	return cnt;
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int N, M;
		cin >> N >> M;
		
		int cnt = 0;
		for(int i=N; i<=M; i++){
			cnt += count(i);
		}
		
		cout << cnt << "\n";
	}
	
	return 0;
}