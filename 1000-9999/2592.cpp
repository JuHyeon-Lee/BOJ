#include <iostream>

using namespace std;

int cnt[1000];

int main(){
	
	int num[10];
	int sum = 0;
	for(int i=0; i<10; i++){
		scanf("%d", &num[i]);
		cnt[num[i]]++;
		sum += num[i];
	}
	
	int maxCnt = 0;
	int maxVal = 0;
	for(int i=0; i<1000; i+=10){
		if(maxCnt<cnt[i]){
			maxCnt = cnt[i];
			maxVal = i;
		}
	}
	
	printf("%d\n%d\n", sum/10, maxVal);

	return 0;
}