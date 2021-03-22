#include <iostream>
#include <set>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	set<int> s;
	
	int cnt = 0;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		if(s.find(num)==s.end()) s.insert(num);
		else cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}