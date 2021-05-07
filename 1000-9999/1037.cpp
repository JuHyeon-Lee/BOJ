#include <iostream>
#include <vector>
#include <algorithm>

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
	
	sort(v.begin(), v.end());
	
	printf("%d\n", v[0] * v[N-1]);
	
	return 0;
}