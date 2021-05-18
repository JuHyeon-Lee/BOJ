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
		int num;
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	
	int sum = 0;
	for(int i=0; i<N; i++){
		sum += v[i] * (N-i);
	}
	
	cout << sum << "\n";
	
	return 0;
}