#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	string S;
	cin >> S;
	
	vector<string> v;
	
	int l = S.length();
	for(int i=0; i<l; i++){
		v.push_back(S.substr(i, l-i));
	}
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<l; i++){
		cout << v[i] << "\n";
	}
	
	return 0;
}