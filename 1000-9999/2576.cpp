#include <iostream>

using namespace std;

int arr[7];

int main(){
	
	int sum = 0;
	int min = 100;
	for(int i=0; i<7; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%2==1){
			sum += arr[i];
			if(arr[i] < min) min = arr[i];
		}
	}
	
	if(sum==0) printf("-1\n");
	else printf("%d\n%d\n", sum, min);
	
	return 0;
}