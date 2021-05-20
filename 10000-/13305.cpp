#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	vector<int> dist;
	vector<int> cost;
	
	for(int i=0; i<N-1; i++){
		int num;
		cin >> num;
		dist.push_back(num);
	}
	
	for(int i=0; i<N; i++){
		int num;
		cin >> num;
		cost.push_back(num);
	}
	
	long long last_cost = 1000000001;
	long long total_cost = 0;
	for(int i=0; i<N-1; i++){
		if(cost[i]<last_cost) last_cost = cost[i];
		total_cost += last_cost * dist[i];
	}
	
	cout << total_cost << "\n";
	
	return 0;
}