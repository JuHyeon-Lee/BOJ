#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int A, B;
	double V;
	scanf("%d%d%lf", &A, &B, &V);
	
	double day = (V-B)/(A-B);
	printf("%.lf", ceil(day));
	
	return 0;
}