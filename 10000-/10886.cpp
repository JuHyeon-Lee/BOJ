#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	int sum = 0;
	for(int i=0; i<N; i++){
		int vote;
		scanf("%d", &vote);
		sum += vote;
	}
	
	if(sum>N/2) printf("Junhee is cute!\n");
	else printf("Junhee is not cute!\n");
	
	return 0;
}