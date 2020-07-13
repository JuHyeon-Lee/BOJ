#include <iostream>
#include <vector>

using namespace std;

int w, h;
vector<vector<int>> map;

void dfs(int x, int y){
	map[x][y] = 0;
	
	if(x>0){
		if(map[x-1][y])
			dfs(x-1, y);
		if(y>0){
			if(map[x-1][y-1])
				dfs(x-1, y-1);
		}
		if(y<w-1){
			if(map[x-1][y+1])
				dfs(x-1, y+1);
		}
	}
	
	if(y>0){
		if(map[x][y-1])
			dfs(x, y-1);
		if(x<h-1){
			if(map[x+1][y-1])
				dfs(x+1, y-1);
		}
	}
	
	if(x<h-1){
		if(map[x+1][y])
			dfs(x+1, y);
		if(y<w-1){
			if(map[x+1][y+1])
				dfs(x+1, y+1);
		}
	}
	
	if(y<w-1){
		if(map[x][y+1])
			dfs(x, y+1);
	}
}

int main(){
	
	while(true){
		scanf("%d%d", &w, &h);
		if(w==0 && h==0) return 0;
		
		map.clear();
		
		for(int i=0; i<h; i++){
			vector<int> row;
			for(int j=0; j<w; j++){
				int land;
				scanf("%d", &land);
				row.push_back(land);
			}
			map.push_back(row);
		}
		
		int cnt = 0;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(map[i][j]){
					cnt++;
					dfs(i, j);
				}
			}
		}
		
		printf("%d\n", cnt);
		
	}
	
	return 0;
}