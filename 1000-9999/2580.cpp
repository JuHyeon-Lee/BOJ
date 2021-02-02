#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> sudoku;
bool found = false;

void printSudoku(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			printf("%d ", sudoku[i][j]);
		}
		printf("\n");
	}
}

void solve(int x, int y){
	
	if(y==9){
		found = true;
		printSudoku();
		return;
	}
	
	if(sudoku[x][y]==0){
		
		bool possible[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
		for(int i=0; i<9; i++){
			possible[sudoku[i][y]] = false;
			possible[sudoku[x][i]] = false;
		}
		
		for(int i=(x/3)*3; i<(x/3)*3+3; i++){
			for(int j=(y/3)*3; j<(y/3)*3+3; j++){
				possible[sudoku[i][j]] = false;
			}
		}
		
		for(int i=1; i<=9; i++){
			if(possible[i] && !found){
				sudoku[x][y] = i;
				if(x==8) solve(0, y+1);
				else solve(x+1, y);
				sudoku[x][y] = 0;
			}
		}
		
	} else {
		if(x==8) solve(0, y+1);
		else solve(x+1, y);
	}
	
}

int main(){
	
	for(int i=0; i<9; i++){
		vector<int> row;
		for(int j=0; j<9; j++){
			int num;
			scanf("%d", &num);
			row.push_back(num);
		}
		sudoku.push_back(row);
	}
	
	solve(0, 0);
	
	return 0;
}