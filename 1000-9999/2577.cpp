#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int arr[10];
	memset(arr, 0, sizeof(arr));
	
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	
	int mul = A * B * C;
	
	while(mul!=0){
		arr[mul%10]++;
		mul/=10;
	}
	
	for(int i=0; i<10; i++){
		printf("%d\n", arr[i]);
	}
	
	return 0;
}