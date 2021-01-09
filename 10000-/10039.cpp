#include <iostream>

using namespace std;

int main(){
	
	int N = 5;
	
	int sum = 0;
	while(N--){
		int num;
		scanf("%d", &num);
		if(num<40) sum += 40;
		else sum += num;
	}
	
	printf("%d", sum/5);
	
	return 0;
}