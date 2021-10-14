#include <iostream>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	while(T--){
		int V, E;
		cin >> V >> E;
		cout << E - V + 2 << "\n";
	}
	
	return 0;
}