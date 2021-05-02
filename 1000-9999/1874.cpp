#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	vector<int> v;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	
	stack<int> s;
	vector<char> log;
	int idx = 0;
	for(int i=1; i<=N; i++){
		s.push(i);
		log.push_back('+');
		
		while(!s.empty() && s.top()==v[idx]){
			s.pop();
			log.push_back('-');
			idx++;
		}
	}
	
	if(s.empty()){
		for(int i=0; i<log.size(); i++){
			printf("%c\n", log[i]);
		}
	} else {
		printf("NO\n");
	}
	
	return 0;
}