#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int H, M;
	scanf("%d%d", &H, &M);
	
	M-=45;
	if(M<0){
		M+=60;
		H--;
		if(H<0){
			H+=24;
		}
	}
	
	printf("%d %d", H, M);
	
	return 0;
}