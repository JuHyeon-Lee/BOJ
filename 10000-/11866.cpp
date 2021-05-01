#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int N, K;
	scanf("%d%d", &N, &K);
	
	queue<int> q;
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	int cnt = K;
	
	printf("<");
	while(!q.empty()){
		if(cnt!=1){
			q.push(q.front());
			q.pop();
		} else {
			printf("%d", q.front());
			q.pop();
			if(!q.empty()) printf(", ");
		}
		cnt--;
		if(cnt==0) cnt = K;
	}
	printf(">\n");
	
	return 0;
}