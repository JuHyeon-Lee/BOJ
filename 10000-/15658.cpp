#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> v;

int minVal = 1000000000;
int maxVal = -1000000000;

void calc(int sum, int i, int a, int b, int c, int d){
	if(i == N-1){
		if(minVal > sum) minVal = sum;
		if(maxVal < sum) maxVal = sum;
		return;
	}
	
	if(a>0) calc(sum+v[i+1], i+1, a-1, b, c, d);	
	if(b>0) calc(sum-v[i+1], i+1, a, b-1, c, d);
	if(c>0) calc(sum*v[i+1], i+1, a, b, c-1, d);
	if(d>0) calc(sum/v[i+1], i+1, a, b, c, d-1);
}

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	calc(v[0], 0, a, b, c, d);
	
	printf("%d\n%d\n", maxVal, minVal);
	
	return 0;
}