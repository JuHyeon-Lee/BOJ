#include <iostream>

using namespace std;

int arr[100];

int main(){
	
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	int v;
	scanf("%d", &v);
	
	int cnt = 0;
	for(int i=0; i<N; i++){
		if(arr[i]==v) cnt++;
	}
	
	printf("%d\n", cnt);
	
	return 0;
}