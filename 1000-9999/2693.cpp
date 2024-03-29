#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int arr[10];
		for(int i=0; i<10; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+10);
		
		cout << arr[7] << "\n";
	}
	
	return 0;
}