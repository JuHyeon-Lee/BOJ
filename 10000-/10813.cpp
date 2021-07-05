#include <iostream>

using namespace std;

int ball[101];

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, M;
	cin >> N >> M;
	
	for(int i=1; i<=N; i++){
		ball[i] = i;
	}
	
	while(M--){
		int i, j;
		cin >> i >> j;
		
		swap(ball[i], ball[j]);
	}
	
	for(int i=1; i<=N; i++){
		cout << ball[i] << " ";
	}
	cout << "\n";
	
	return 0;
}