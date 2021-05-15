#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, K;
	cin >> N >> K;
	
	vector<int> coin;
	for(int i=0; i<N; i++){
		int price;
		cin >> price;
		coin.push_back(price);
	}
	
	int sum = 0;
	for(int i=N-1; i>=0; i--){
		sum += K / coin[i];
		K = K % coin[i];
	}
	
	cout << sum << "\n";
	
	return 0;
}