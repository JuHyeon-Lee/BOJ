#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int A, B;
	scanf("%d%d", &A, &B);
	
	string strA = to_string(A);
	string strB = to_string(B);
	
	for(int i=0; i<strA.length(); i++){
		if(strA[i]=='6') strA[i] = '5';
	}
	
	for(int i=0; i<strB.length(); i++){
		if(strB[i]=='6') strB[i] = '5';
	}
	
	A = stoi(strA);
	B = stoi(strB);
	
	printf("%d ", A+B);
	
	for(int i=0; i<strA.length(); i++){
		if(strA[i]=='5') strA[i] = '6';
	}
	
	for(int i=0; i<strB.length(); i++){
		if(strB[i]=='5') strB[i] = '6';
	}
	
	A = stoi(strA);
	B = stoi(strB);
	
	printf("%d", A+B);
	
	
	return 0;
}