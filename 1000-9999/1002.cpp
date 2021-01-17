#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		float x1, y1, r1, x2, y2, r2;
		scanf("%f%f%f%f%f%f", &x1, &y1, &r1, &x2, &y2, &r2);
		
		float dx = abs(x1 - x2);
		float dy = abs(y1 - y2);
		float dr = abs(r1 - r2);
		
		float dist = sqrt(dx*dx + dy*dy);
		
		if(x1==x2 && y1==y2 && r1==r2){
			printf("-1\n");
		} else if(dist > r1+r2){
			printf("0\n");
		} else if (dist == r1+r2){
			printf("1\n");
		} else if(dist < r1+r2){
			if(dist > dr){
				printf("2\n");
			} else if(dist == dr){
				printf("1\n");
			} else if(dist < dr){
				printf("0\n");
			}
		}
	}
	
	return 0;
}