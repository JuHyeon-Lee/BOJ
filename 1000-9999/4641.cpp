#include <iostream>
#include <set>

using namespace std;

int main(){
	
	bool running = true;
	while(running){
		set<int> s;
		int cnt = 0;
		while(true){
			int n;
			scanf("%d", &n);
			if(n==0) break;
			if(n==-1){
				running = false;
				break;
			}
			
			s.insert(n);
			if(n%2==0 && s.find(n/2)!=s.end()) cnt++;
			if(s.find(n*2)!=s.end()) cnt++;
		}
		if(running) printf("%d\n", cnt);
	}
	
	return 0;
}