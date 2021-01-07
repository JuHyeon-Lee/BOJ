#include <iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int H, W, N;
		scanf("%d%d%d", &H, &W, &N);
		
		int floor = (N-1)%H+1;
		int room = (N-1)/H+1;
		
		if(room<10) printf("%d0%d\n", floor, room);
		else printf("%d%d\n", floor, room);
	}
	
	return 0;
}