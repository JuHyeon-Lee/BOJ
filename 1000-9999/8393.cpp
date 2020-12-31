#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	for(int i=1; i<=n; i++){
		sum += i;
	}
	
	printf("%d", sum);
	
	return 0;
}