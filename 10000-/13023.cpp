#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

vector<int> array[2000];
bool visited[2000];

bool dfs(int depth, int n) {
    if(depth == 5) {
        return true;
    }
	
    visited[n] = true; 
	
    for(int i = 0; i < array[n].size(); i++) {
        int next = array[n][i];
        if(visited[next]) continue;
        if(dfs(depth + 1, next)) { 
            return true;
        }
	}
	
    visited[n] = false;
	
    return false;
}
 
int main(void) {
	
    int depth, N, M, a, b;
    scanf("%d %d", &N, &M);
	
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        array[a].push_back(b);
        array[b].push_back(a);
    }
	
    for(int i = 0 ; i < N; i++) {
        if(dfs(1, i)) {
            printf("1");
            return 0;
        }
    }
	
    printf("0");
}