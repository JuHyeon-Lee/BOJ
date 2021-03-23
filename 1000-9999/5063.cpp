#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	while(N--){
		int r, e, c;
		scanf("%d%d%d", &r, &e, &c);
		int r2 = e - c;
		if(r<r2) printf("advertise\n");
		else if(r==r2) printf("does not matter\n");
		else if(r>r2) printf("do not advertise\n");
	}
	
	return 0;
}