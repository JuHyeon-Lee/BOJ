#include <iostream>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, K;
	cin >> N >> K;
	
	int child = 1;
	for(int i=N; i>N-K; i--){
		child *= i;
	}
	
	int parent = 1;
	for(int i=K; i>0; i--){
		parent *= i;
	}
	
	cout << child / parent << "\n";
	
	return 0;
}