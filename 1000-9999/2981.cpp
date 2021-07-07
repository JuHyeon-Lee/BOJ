#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int p, int q){
	if(q==0) return p;
	return gcd(q, p%q);
}

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	vector<int> v;
	while(N--){
		int num;
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	
	int g = v[1] - v[0];
	for(int i=1; i<v.size()-1; i++){
		g = gcd(g, v[i+1]-v[i]);
	}
	
	vector<int> ans;
	for(int i=1; i*i<=g; i++){
		if(g%i == 0){
			ans.push_back(i);
			if(i != g/i) ans.push_back(g/i);
		}
	}
	
	sort(ans.begin(), ans.end());
	for(int i=1; i<ans.size(); i++){
		cout << ans[i] << " ";
	}
	
	return 0;
}