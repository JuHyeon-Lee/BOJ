#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int,int>> lines;
int dp[100];

bool func(pair<int,int> a, pair<int,int> b){
	return a.first < b.first;
}

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		int s, e;
		scanf("%d%d", &s, &e);
		lines.push_back({s,e});
	}
	
	sort(lines.begin(), lines.end(), func);
	
	for(int i=0; i<N; i++){
		for(int j=i; j>=0; j--){
			if(lines[j].second < lines[i].second && dp[j] > dp[i]) dp[i] = dp[j];
		}
		dp[i]++;
	}
	
	int max = 0;
	for(int i=0; i<N; i++){
		if(dp[i] > max) max = dp[i];
	}
	
	printf("%d\n", N - max);
	
	return 0;
}