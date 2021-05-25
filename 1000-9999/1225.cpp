#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	string A, B;
	cin >> A >> B;
	
	long long sum = 0;
	for(int i=0; i<A.length(); i++){
		int n = A[i] - 48;
		for(int j=0; j<B.length(); j++){
			int m = B[j] - 48;
			sum += n * m;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}