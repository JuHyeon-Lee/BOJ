#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	vector<int> v;
	for(int i=0; i<N; i++){
		int t;
		cin >> t;
		v.push_back(t);
	}
	
	sort(v.begin(), v.end(), greater<int>());
	
	int max = 1;
	for(int i=0; i<N; i++){
		int end = (i+1) + 1 + v[i];
		if(end > max) max = end;
	}
	
	cout << max << "\n";
	
	return 0;
}