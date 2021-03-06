#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main(){
	
	map<char, int> m;
	m['A'] = 3; m['B'] = 3; m['C'] = 3;
	m['D'] = 4; m['E'] = 4; m['F'] = 4;
	m['G'] = 5; m['H'] = 5; m['I'] = 5;
	m['J'] = 6; m['K'] = 6; m['L'] = 6;
	m['M'] = 7; m['N'] = 7; m['O'] = 7;
	m['P'] = 8; m['Q'] = 8; m['R'] = 8; m['S'] = 8;
	m['T'] = 9; m['U'] = 9; m['V'] = 9;
	m['W'] = 10; m['X'] = 10; m['Y'] = 10; m['Z'] = 10;

	char str[15];
	scanf("%s", str);
	
	int sum = 0;
	for(int i=0; i<strlen(str); i++){
		sum += m[str[i]];
	}
	
	printf("%d", sum);
	
	return 0;
}