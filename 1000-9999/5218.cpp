#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	while(T--){
		string A, B;
		cin >> A >> B;
		
		cout << "Distances: ";
		for(int i=0; i<A.length(); i++){
			int dist = B[i] - A[i];
			if(dist<0) dist += 26;
			cout << dist << " ";
		}
		cout << "\n";
	}
	
	return 0;
}