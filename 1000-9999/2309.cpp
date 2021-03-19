#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
bool found = false;

void solve(vector<int> tmp, int sum, int cur){
	if(found) return;
	if(tmp.size()==7 && sum==100){
		vector<int> tmp2;
		for(int i=0; i<7; i++){
			tmp2.push_back(tmp[i]);
		}
		sort(tmp2.begin(), tmp2.end());
		for(int i=0; i<7; i++){
			printf("%d\n", tmp2[i]);
		}
		found = true;
	}
	
	for(int i=cur; i<9; i++){
		tmp.push_back(v[i]);
		sum += v[i];
		solve(tmp, sum, i+1);
		tmp.pop_back();
		sum -= v[i];
	}
}

int main(){
	
	for(int i=0; i<9; i++){
		int h;
		scanf("%d", &h);
		v.push_back(h);
	}
	
	vector<int> tmp;
	solve(tmp, 0, 0);
	
	return 0;
}