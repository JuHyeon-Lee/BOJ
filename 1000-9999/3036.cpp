#include <iostream>
#include <vector>

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
	for(int i=0; i<N; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}
	
	for(int i=1; i<N; i++){
		int g = gcd(v[0], v[i]);
		cout << v[0]/g << "/" << v[i]/g << "\n";
	}
	
	return 0;
}