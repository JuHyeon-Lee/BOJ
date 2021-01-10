#include <iostream>

using namespace std;

int arr[15][15];

int main(){
	
	for(int i=1; i<15; i++){
		arr[0][i] = i;
	}
	
	for(int i=1; i<15; i++){
		for(int j=1; j<15; j++){
			arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
	}
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int k, n;
		scanf("%d%d", &k, &n);
		
		printf("%d\n", arr[k][n]);
	}
	
	return 0;
}