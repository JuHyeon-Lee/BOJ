#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	string s;
	cin >> s;
		
	int sum = 0;
	for(int i=0; i<s.length(); i++){
		sum += s[i] - 48;
	}
	
	printf("%d", sum);
	
	return 0;
}