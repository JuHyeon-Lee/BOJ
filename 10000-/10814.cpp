#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
	return a.first<b.first;
}

int main(){
	
	cin.tie(0); cout.tie(0);
	std::ios::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<pair<int, string>> v;
	
	for(int i=0; i<N; i++){
		int age;
		string name;
		cin >> age >> name;
		
		v.push_back({age, name});
	}
	
	stable_sort(v.begin(), v.end(), comp);
	
	for(int i=0; i<N; i++){
		cout << v[i].first << " " << v[i].second << "\n";
	}
	
	return 0;
}