#include <iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	while(T--){
		int m, n;
		scanf("%d%d", &m, &n);
		
		int box[100][100];
		
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				scanf("%d", &box[i][j]);
			}
		}
		
		int sum = 0;
		for(int i=0; i<n; i++){
			int cnt = 0;
			for(int j=m-1; j>=0; j--){
				if(box[j][i]){
					sum += (m-j-1)-cnt;
					cnt++;
				}
			}
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}