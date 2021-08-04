#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int total;
bool answer[9];

bool comp(pair<int,int> a, pair<int,int> b){
	return a.second > b.second;
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	vector<pair<int,int>> v;
	
	for(int i=1; i<9; i++){
		int score;
		cin >> score;
		v.push_back({i,score});
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i=0; i<5; i++){
		answer[v[i].first] = true;
		total += v[i].second;
	}
	
	cout << total << "\n";
	for(int i=1; i<9; i++){
		if(answer[i]) cout << i << " ";
	}
	cout << "\n";
	
	return 0;
}