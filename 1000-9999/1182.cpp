#include <iostream>
#include <vector>

using namespace std;

int N, S;
vector<int> v;

int res = 0;

void calc(vector<int> tmp){
	int sum = 0;
	for(int i=0; i<tmp.size(); i++){
		sum += tmp[i];
	}
	if(sum == S)
		res++;
}

void comb(vector<int> tmp, int cnt, int cur, int target){
	if(cnt==target){
		calc(tmp);
		return;
	}
	
	for(int i=cur; i<v.size(); i++){
		tmp.push_back(v[i]);
		comb(tmp, cnt+1, i+1, target);
		tmp.pop_back();
	}
}

int main(){
	scanf("%d%d", &N, &S);
	
	for(int i=0; i<N; i++){
		int n;
		scanf("%d", &n);
		v.push_back(n);
	}
	
	for(int i=1; i<=N; i++){
		vector<int> tmp;
		comb(tmp, 0, 0, i);
	}
	
	printf("%d\n", res);
	
	return 0;
}