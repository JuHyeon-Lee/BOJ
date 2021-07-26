#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	while(true){
		int n;
		cin >> n;
		
		if(n==-1) break;
		
		cout << n;
		
		vector<int> v;
		int sum = 1;
		v.push_back(1);
		for(int i=2; i*i<=n; i++){
			if(n%i==0){
				v.push_back(i);
				v.push_back(n/i);
				sum += i;
				sum += n/i;
			}
		}
		
		if(sum!=n){
			cout << " is NOT perfect.\n";
			continue;
		}
		
		sort(v.begin(), v.end());
		
		cout << " = ";
		for(int i=0; i<v.size(); i++){
			cout << v[i];
			if(i<v.size()-1) cout << " + ";
		}
		cout << "\n";
	}
	
	return 0;
}