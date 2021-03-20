#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	cin >> s;
	
	char before = '.';
	int sum = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i]==before) sum += 5;
		else {
			sum += 10;
			before = s[i];
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}