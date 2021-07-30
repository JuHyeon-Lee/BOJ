#include <iostream>
#include <string>

using namespace std;

bool used[91];

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		for(int i=65; i<=90; i++){
			used[i] = false;
		}
		
		string S;
		cin >> S;
		
		for(int i=0; i<S.length(); i++){
			used[S[i]] = true;
		}
		
		int sum = 0;
		for(int i=65; i<=90; i++){
			if(!used[i]) sum += i;
		}
		
		cout << sum << "\n";
	}
	
	return 0;
}