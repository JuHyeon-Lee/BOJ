#include <iostream>

using namespace std;

int cnt[1001];

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, M, L;
	cin >> N >> M >> L;
	
	int cur = 1;
	int ans = 0;
	while(true){
		cnt[cur]++;
		if(cnt[cur]>=M) break;
		
		if(cnt[cur]%2) {
			cur -= L;
			if(cur<=0) cur += N;
		} else {
			cur += L;
			if(cur>N) cur -= N;
		}
		
		ans++;
	}
	
	cout << ans << "\n";
	
	return 0;
}