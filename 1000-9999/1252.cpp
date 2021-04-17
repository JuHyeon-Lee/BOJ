#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string n1, n2;
	cin >> n1 >> n2;
	
	int len1 = n1.length();
	int len2 = n2.length();
	int maxLen = max(len1, len2);
	
	string result = "";
	bool carry = false;
	while(maxLen--){
		len1--; len2--;
		
		int sum = carry;
		if(len1>=0) sum += n1[len1] - 48;
		if(len2>=0) sum += n2[len2] - 48;
		
		carry = sum / 2;
		result = (char)(sum%2+48) + result;
	}
	
	if(carry) result = '1' + result;
	
	for(int i=0; i<result.length(); i++){
		if(result[i]-48==1){
			result = result.substr(i);
			break;
		}
		if(i==result.length()-1) result = "0";
	}
	
	cout << result << endl;
	
	return 0;
}