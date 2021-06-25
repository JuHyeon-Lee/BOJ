#include <iostream>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, less<int>> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N;
	cin >> N;
	
	while(N--){
		int x;
		cin >> x;
		
		if(maxHeap.empty()) {
			maxHeap.push(x);
		} else {
			
			if(maxHeap.size()>minHeap.size())
				minHeap.push(x);
			else
				maxHeap.push(x);
			
			if (maxHeap.top() > minHeap.top()) {
				int maxtop = maxHeap.top();
				int mintop = minHeap.top();
				maxHeap.pop();
				minHeap.pop();
				maxHeap.push(mintop);
				minHeap.push(maxtop);
			}
		}
		
		cout << maxHeap.top() << "\n";
	}
	
	return 0;
}