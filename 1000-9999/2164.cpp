#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	queue<int> q;
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	bool flag = false;
	while(q.size()>1){
		if(flag) q.push(q.front());
		q.pop();
		flag = !flag;
	}
	
	printf("%d\n", q.front());
	
	return 0;
}