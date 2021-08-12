#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	vector<int> A;
	for(int i=0; i<N; i++){
		int num;
		cin >> num;
		A.push_back(num);
	}
	
	vector<int> B;
	for(int i=0; i<N; i++){
		int num;
		cin >> num;
		B.push_back(num);
	}
	
	sort(A.begin(), A.end(), greater<int>());
	sort(B.begin(), B.end(), less<int>());
	
	int sum = 0;
	for(int i=0; i<N; i++){
		sum += A[i] * B[i];
	}
	
	cout << sum << "\n";
	
	return 0;
}