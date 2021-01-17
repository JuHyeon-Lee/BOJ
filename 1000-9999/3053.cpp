#include <iostream>

using namespace std;

#define PI 3.141592653589793238

int main(){
	
	double R;
	scanf("%lf", &R);
	
	printf("%.6lf\n", PI * R * R);
	printf("%.6lf\n", R * R * 2);
	
	return 0;
}