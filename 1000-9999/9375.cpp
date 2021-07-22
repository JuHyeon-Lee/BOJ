#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int N;
		cin >> N;
		
		map<string, int> m;
		
		for(int i=0; i<N; i++){
			string item, type;
			cin >> item >> type;
			
			m[type]++;
		}
		
		int sum = 1;
		
		map<string, int>::iterator it;
		for(it=m.begin(); it!=m.end(); it++){
			sum *= it->second + 1;
		}
		
		sum -= 1;
		
		cout << sum << "\n";
	}
	
	return 0;
}