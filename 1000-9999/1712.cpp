#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double A;
	int B, C;
	scanf("%lf%d%d", &A, &B, &C);
	
	if(B>=C){
		printf("-1");
		return 0;
	}
	
	double ans = A / (C - B);
	ans = floor(ans + 1);
	
	printf("%.lf", ans);
	
	return 0;
}