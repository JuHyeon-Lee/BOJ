#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	
	int N, M;
	scanf("%d%d", &N, &M);
	
	vector<int> v;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	
	int max = 0;
	for(int i=0; i<N-2; i++){
		for(int j=i+1; j<N-1; j++){
			for(int k=j+1; k<N; k++){
				int sum = v[i] + v[j] + v[k];
				if(M-sum>=0 && abs(M-sum)<M-max) max = sum;
			}
		}
	}
	
	printf("%d\n", max);
	
	return 0;
}