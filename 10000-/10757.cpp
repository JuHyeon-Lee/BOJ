#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	string A, B;
	cin >> A >> B;
	
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	while(A.length()>B.length()){
		B+='0';
	}
	while(A.length()<B.length()){
		A+='0';
	}
	
	int carry = 0;
	for(int i=0; i<B.length(); i++){
		int sum = (A[i]-48) + (B[i]-48);
		if(carry) sum++;
		
		if(sum>9){
			carry = 1;
			sum -= 10;
		} else {
			carry = 0;
		}
		
		A[i] = sum + 48;
	}
	
	if(carry){
		A += '1';
	}
	
	reverse(A.begin(), A.end());
	
	cout << A << endl;
	
	return 0;
}