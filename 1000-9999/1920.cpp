#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool search(vector<int> &v, int n){
	int s = 0;
	int e = v.size()-1;
	
	while(s<=e){
		int m = (s+e)/2;
		if(v[m]==n) return true;
		else if(v[m]>n) e = m-1;
		else if(v[m]<n) s = m+1;
	}
	
	return false;
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, M;
	cin >> N;
	
	vector<int> v;
	while(N--){
		int n;
		cin >> n;
		v.push_back(n);
	}
	
	sort(v.begin(), v.end());
	
	cin >> M;
	
	while(M--){
		int n;
		cin >> n;
		cout << search(v, n) << "\n";
	}
	
	return 0;
}