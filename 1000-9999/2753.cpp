#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int year;
	scanf("%d", &year);
	
	if(year%4==0){
		if(year%100!=0 || year%400==0){
			printf("1");
			return 0;
		}
	}
	printf("0");
	
	return 0;
}