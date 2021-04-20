#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string A, B, C, D;
	cin >> A >> B >> C >> D;
	
	long long result = stoll(A+B) + stoll(C+D);
	
	cout << result << endl;
	
	return 0;
}