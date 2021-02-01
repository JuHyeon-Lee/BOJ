#include <iostream>
#include <vector>

using namespace std;

int N, cnt;
vector<int> queens;

bool check(int x, int y){
	for(int i=0; i<x; i++){
		float dx = x - i;
		float dy = y - queens[i];
		
		if(dy==0) return false;
		
		float grad = dy / dx;
		
		if(grad==-1 || grad==1) return false;
	}
	return true;
}

void search(int x){
	if(queens.size()==N){
		cnt++;
		return;
	}
	
	for(int y=0; y<N; y++){
		if(check(x,y)){
			queens.push_back(y);
			search(x+1);
			queens.pop_back();
		}
	}
}

int main(){
	
	scanf("%d", &N);
	
	search(0);
	
	printf("%d\n", cnt);
	
	return 0;
}