#include <iostream>

using namespace std;

bool table[100][100];

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	for(int i=0; i<4; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for(int x=x1; x<x2; x++){
			for(int y=y1; y<y2; y++){
				table[x][y] = true;
			}
		}
	}
	
	int area = 0;
	for(int x=0; x<100; x++){
		for(int y=0; y<100; y++){
			if(table[x][y]) area++;
		}
	}
	
	cout << area << "\n";
	
	return 0;
}