#include <iostream>
#include <string>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		string A, B;
		cin >> A >> B;
		
		int cnt[123];
		
		for(int i=97; i<123; i++){
			cnt[i] = 0;
		}
		
		for(int i=0; i<A.length(); i++){
			cnt[A[i]]++;
		}
		
		for(int i=0; i<B.length(); i++){
			cnt[B[i]]--;
		}
		
		bool answer = true;
		for(int i=97; i<123; i++){
			if(cnt[i]!=0){
				answer = false;
				break;
			}
		}
		
		if(answer) cout << A << " & " << B << " are anagrams.\n";
		else cout << A << " & " << B << " are NOT anagrams.\n";
	}
	
	return 0;
}