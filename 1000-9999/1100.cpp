#include <iostream>

using namespace std;

int board[8][8];
int cnt;

int main(){
	
	bool white = true;
	for(int i=0; i<8; i++){
		char row[9];
		scanf("%s", row);
		for(int j=0; j<8; j++){
			if(white && row[j]=='F') cnt++;
			white = !white;
		}
		white = !white;
	}
	
	printf("%d\n", cnt);
	
	return 0;
}