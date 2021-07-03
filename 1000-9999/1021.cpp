#include <iostream>
#include <deque>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, M;
	cin >> N >> M;
	
	deque<int> d;
	for(int i=1; i<=N; i++){
		d.push_back(i);
	}
	
	int answer = 0;
	for(int i=0; i<M; i++){
		int x;
		cin >> x;
		
		int cnt = 0;
		while(d.front()!=x){
			d.push_back(d.front());
			d.pop_front();
			cnt++;
		}
		
		if(cnt < d.size()-cnt) answer += cnt;
		else answer += d.size() - cnt;
		
		d.pop_front();
	}
	
	cout << answer << "\n";
	
	return 0;
}