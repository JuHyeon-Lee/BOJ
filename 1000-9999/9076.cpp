#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int arr[5];
		for(int i=0; i<5; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+5);
		
		if(arr[3]-arr[1] >= 4) cout << "KIN\n";
		else cout << arr[1] + arr[2] + arr[3] << "\n";
	}
	
	return 0;
}