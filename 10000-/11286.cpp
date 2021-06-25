#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>

using namespace std;

struct comp{
	bool operator()(int a, int b){
		if(abs(a)==abs(b)) return a>b;
		return abs(a)>abs(b);
	}
};

priority_queue<int, vector<int>, comp> pq;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	while(N--){
		int x;
		cin >> x;
		
		if(x==0){
			if(pq.empty()){
				cout << 0 << "\n";
			} else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		} else {
			pq.push(x);
		}
	}
	
	return 0;
}