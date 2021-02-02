#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> v;
int op[4];
int maxVal = -1000000001;
int minVal = 1000000001;

int operate(int n1, int n2, int operation){
	int result;
	switch(operation){
		case 0:
			result = n1 + n2;
			break;
		case 1:
			result = n1 - n2;
			break;
		case 2:
			result = n1 * n2;
			break;
		case 3:
			result = n1 / n2;
			break;
	}
	return result;
}

void solve(int cur, int res){
	if(cur==N){
		if(res > maxVal) maxVal = res;
		if(res < minVal) minVal = res;
		return;
	}
	
	for(int i=0; i<4; i++){
		if(op[i]>0){
			op[i]--;
			int result = operate(res, v[cur], i);
			solve(cur+1, result);
			op[i]++;
		}
	}
}

int main(){
	
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	
	for(int i=0; i<4; i++){
		scanf("%d", &op[i]);
	}
	
	solve(1, v[0]);
	
	printf("%d\n%d\n", maxVal, minVal);
	
	return 0;
}