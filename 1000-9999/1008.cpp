#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	double A, B;
	scanf("%lf%lf", &A, &B);
	printf("%.10lf", A/B);
	
	return 0;
}