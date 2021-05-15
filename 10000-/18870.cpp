#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	vector<int> v_original;
	vector<int> v;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		v_original.push_back(num);
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	
	map<int, int> comp;
	for(int i=0; i<v.size(); i++){
		comp[v[i]] = i;
	}
	
	for(int i=0; i<N; i++){
		printf("%d ", comp[v_original[i]]);
	}
	printf("\n");
	
	return 0;
}