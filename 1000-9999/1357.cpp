#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Rev(int num){
	string s = to_string(num);
	reverse(s.begin(), s.end());
	num = stoi(s);
	return num;
}

int main(){
	
	int X, Y;
	scanf("%d%d", &X, &Y);
	
	printf("%d\n", Rev(Rev(X)+Rev(Y)));
	
	return 0;
}