#include <iostream>

using namespace std;

bool eureka(int K){
	for(int a=1; a<50; a++){
		for(int b=1; b<50; b++){
			for(int c=1; c<50; c++){
				int Ta = (a * (a + 1)) / 2;
				int Tb = (b * (b + 1)) / 2;
				int Tc = (c * (c + 1)) / 2;
				if(K==Ta+Tb+Tc) return true;
			}
		}
	}
	return false;
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int K;
		cin >> K;
		cout << eureka(K) << "\n";
	}
	
	return 0;
}