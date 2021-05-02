#include <iostream>
#include <stack>

using namespace std;

int NGE[1000000];

int main(){
	
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		NGE[i] = -1;
	}
	
	stack<pair<int,int>> s;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		
		while(!s.empty() && s.top().second<num){
			NGE[s.top().first] = num;
			s.pop();
		}
		
		s.push({i, num});
	}
	
	for(int i=0; i<N; i++){
		printf("%d ", NGE[i]);
	}
	
	return 0;
}