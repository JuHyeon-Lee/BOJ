#include <iostream>

using namespace std;

int main(){
	
	int max[6] = {1, 1, 2, 2, 2, 8};
	
	int cnt[6];
	scanf("%d%d%d%d%d%d", &cnt[0], &cnt[1], &cnt[2], &cnt[3], &cnt[4], &cnt[5]);
	
	for(int i=0; i<6; i++){
		printf("%d ", max[i] - cnt[i]);
	}
	
	return 0;
}