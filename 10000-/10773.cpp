#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	int K;
	scanf("%d", &K);
	
	stack<int> s;
	while(K--){
		int N;
		scanf("%d", &N);
		
		if(!N) s.pop();
		else s.push(N);
	}
	
	long long sum = 0;
	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	
	printf("%lld\n", sum);
	
	return 0;
}