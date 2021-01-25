#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	vector<int> v;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		
		vector<int>::iterator it = v.begin();
		while(it!=v.end() && *it<num){
			it++;
		}
		
		v.insert(it, num);
	}
	
	for(int i=0; i<N; i++){
		printf("%d\n", v[i]);
	}
	
	return 0;
}