#include <iostream>

using namespace std;

int d(int n){
	int sum = n;
	while(n!=0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main(){
	
	bool self[10001];
	for(int i=1; i<10001; i++){
		self[i] = true;
	}
	
	for(int i=1; i<10001; i++){
		int res = d(i);
		if(res>10000) continue;
		self[res] = false;
	}
	
	for(int i=1; i<10001; i++){
		if(self[i]) printf("%d\n", i);
	}
	
	return 0;
}