#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int reverseInt(int num){
	string s = to_string(num);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());
}

int main(){
	
	int A, B;
	scanf("%d%d", &A, &B);
	
	int reverseA = reverseInt(A);
	int reverseB = reverseInt(B);
	
	if(reverseA>reverseB) printf("%d", reverseA);
	else printf("%d", reverseB);

	return 0;
}