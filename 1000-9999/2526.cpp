#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, P;
	cin >> N >> P;
	
	int cur = N;
	vector<int> v;
	v.push_back(N);
	
	while(true){
		cur = cur * N % P;
		
		for(int i=0; i<v.size(); i++){
			if(v[i]==cur){
				cout << v.size()-i << endl;
				return 0;
			}
		}
		
		v.push_back(cur);
	}
	
	return 0;
}