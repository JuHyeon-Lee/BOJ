#include <iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		double num;
		scanf("%lf", &num);
		printf("$%.2lf\n", num*0.8);
	}
	
	return 0;
}