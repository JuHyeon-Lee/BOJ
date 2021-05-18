#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	vector<pair<int,int>> v;
	for(int i=0; i<N; i++){
		int start, end;
		cin >> start >> end;
		v.push_back({start, end});
	}
	
	sort(v.begin(), v.end(), comp);
	
	int cnt = 0;
	int last = 0;
	for(int i=0; i<N; i++){
		if(last<=v[i].first){
			last = v[i].second;
			cnt++;
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}