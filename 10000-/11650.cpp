#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
	if(a.first==b.first){
		return a.second<b.second;
	} else {
		return a.first<b.first;
	}
}

int main(){
	
	int N;
	scanf("%d", &N);
	
	vector<pair<int,int>> v;
	
	for(int i=0; i<N; i++){
		int x, y;
		scanf("%d%d", &x, &y);
		v.push_back({x, y});
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i=0; i<N; i++){
		printf("%d %d\n", v[i].first, v[i].second);
	}
	
	return 0;
}