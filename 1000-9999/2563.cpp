#include <iostream>

using namespace std;

bool paper[100][100];

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	while(N--){
		int X, Y;
		cin >> X >> Y;
		
		for(int i=X; i<X+10; i++){
			for(int j=Y; j<Y+10; j++){
				paper[i][j] = true;
			}
		}
	}
	
	int cnt = 0;
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			if(paper[i][j]) cnt++;
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}