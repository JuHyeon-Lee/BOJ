#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string A, B;
	cin >> A >> B;
	
	if(A.length()>=B.length()) printf("go\n");
	else printf("no\n");
	
	return 0;
}