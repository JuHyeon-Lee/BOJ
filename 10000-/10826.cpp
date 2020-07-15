#include <iostream> 
#include <string> 
#include <algorithm> 

using namespace std; 

string Add(string &s1, string &s2) { 
	
	string result(max(s1.size(), s2.size()), '0');
	bool carry = false;
	
	for (int i = 0; i < result.size(); i++) { 
		int temp = carry; carry = false; 
		
		if (i < s1.size()) 
			temp += s1[s1.size() - i - 1] - '0'; 
		if (i < s2.size()) 
			temp += s2[s2.size() - i - 1] - '0'; 
		if (temp >= 10) { 
			carry = true; 
			temp -= 10; 
		} 
		
		result[result.size() - i - 1] = temp + '0'; 
	} 
	
	if (carry) 
		result.insert(result.begin(), '1');
	
	return result; 
} 

int main(void) { 
	
	int N; 
	scanf("%d", &N);
	
	string a = "0";
	string b = "1"; 
	
	if (N == 0) 
		printf("%s\n", a.c_str());
	else if (N == 1) 
		printf("%s\n", b.c_str());
	else { 
		string result; 
		for (int i = 0; i <= N - 2; i++) { 
			result = Add(a, b); 
			a = b; 
			b = result; 
		} 
		printf("%s\n", result.c_str()); 
	} 
	
	return 0; 
}