#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	while(T--){
		int N, M;
		scanf("%d%d", &N, &M);
		
		queue<pair<int,int>> q;
		for(int i=0; i<N; i++){
			int num;
			scanf("%d", &num);
			q.push({i,num});
		}
		
		int cnt = 1;
		while(!q.empty()){
			int cur = q.front().first;
			int max = q.front().second;
			while(true){
				q.push(q.front());
				q.pop();
				
				if(q.front().first == cur) break;
				if(q.front().second > max) max = q.front().second;
			}
			
			while(true){
				if(q.front().second == max) break;
				q.push(q.front());
				q.pop();
			}
			
			if(q.front().first == M) break;
			q.pop();
			cnt++;
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}