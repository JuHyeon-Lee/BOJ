#include <iostream>
#include <vector>

using namespace std;

int num[9];

void solve(vector<int> v, int cur){
	if(v.size()==7){
		int sum = 0;
		for(int i=0; i<v.size(); i++){
			sum += v[i];
		}
		if(sum==100){
			for(int i=0; i<v.size(); i++){
				printf("%d\n", v[i]);
			}
		}
		return;
	}
	for(int i=cur; i<9; i++){
		v.push_back(num[i]);
		solve(v, i+1);
		v.pop_back();
	}
}

int main(){
	
	for(int i=0; i<9; i++){
		scanf("%d", &num[i]);
	}
	
	vector<int> v;
	solve(v, 0);
	
	return 0;
}