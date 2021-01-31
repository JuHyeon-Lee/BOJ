#include <iostream>
#include <vector>

using namespace std;

int N, M;

void print(vector<int> v){
	for(int i=0; i<v.size(); i++){
		printf("%d ", v[i]);
	}
	printf("\n");
}

void perm(vector<int> v, int start){
	if(v.size()==M){
		print(v);
		return;
	}
	
	for(int i=start; i<=N; i++){
		v.push_back(i);
		perm(v, i);
		v.pop_back();
	}
}

int main(){
	
	scanf("%d%d", &N, &M);
	
	vector<int> v;
	perm(v, 1);
	
	return 0;
}