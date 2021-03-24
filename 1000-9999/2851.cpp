#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int ans = 0;
	int sum = 0;
	for(int i=0; i<10; i++){
		int score;
		scanf("%d", &score);
		sum += score;
		if(abs(100-ans)>=abs(100-sum)) ans = sum;
	}
	
	printf("%d", ans);
	
	return 0;
}