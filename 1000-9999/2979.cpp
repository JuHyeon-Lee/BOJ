#include <iostream>

using namespace std;

int cnt[101];

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int A, B, C;
	cin >> A >> B >> C;
	
	for(int i=0; i<3; i++){
		int s, e;
		cin >> s >> e;
		for(int j=s; j<e; j++){
			cnt[j]++;	
		}
	}
	
	int sum = 0;
	for(int i=0; i<100; i++){
		if(cnt[i]==1) sum += A;
		if(cnt[i]==2) sum += B*2;
		if(cnt[i]==3) sum += C*3;
	}
	
	cout << sum << endl;
	
	return 0;
}