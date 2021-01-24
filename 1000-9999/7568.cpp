#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<pair<int, int>> v;
	vector<int> rank;
	
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		int w, h;
		scanf("%d%d", &w, &h);
		v.push_back({w, h});
	}
	
	for(int i=0; i<N; i++){
		int cnt = 1;
		for(int j=0; j<N; j++){
			if(i!=j && v[i].first<v[j].first && v[i].second<v[j].second){
				cnt++;
			}
		}
		rank.push_back(cnt);
	}
	
	for(int i=0; i<N; i++){
		printf("%d ", rank[i]);
	}
	
	return 0;
}