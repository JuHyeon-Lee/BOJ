#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int R, C, ZR, ZC;
	cin >> R >> C >> ZR >> ZC;
	
	vector<string> rows;
	for(int i=0; i<R; i++){
		string row;
		cin >> row;
		rows.push_back(row);
	}
	
	for(int x=0; x<R; x++){
		for(int i=0; i<ZR; i++){
			for(int y=0; y<C; y++){
				for(int j=0; j<ZC; j++){
					cout << rows[x][y];
				}
			}
			cout << "\n";
		}
	}
	
	return 0;
}