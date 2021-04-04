#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	int num[3];
	string input;
	
	cin >> num[0] >> num[1] >> num[2] >> input;
	
	sort(num, num+3);
	
	for(int i=0; i<3; i++){
		switch(input[i]){
			case 'A':
				cout << num[0] << " ";
				break;
			case 'B':
				cout << num[1] << " ";
				break;
			case 'C':
				cout << num[2] << " ";
				break;
		}
	}
	
	return 0;
}