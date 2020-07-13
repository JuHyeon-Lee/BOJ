#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

#define MAX 1001

int N, M, V;
bool visit[MAX];
bool graph[MAX][MAX];

void recursionDFS(int cur) {
	visit[cur] = true;
	printf("%d ", cur);
	
	for (int i = 1; i <= N; i++) {
		if (graph[cur][i]) {
			if (!visit[i]) {
				recursionDFS(i);
			}
		}
	}
}

void stackDFS(int start) {

	stack<int> s;
	s.push(start);

	while (!s.empty()) {
		int cur = s.top();
		s.pop();

		if(visit[cur]) continue;
		
		visit[cur] = true;
		printf("%d ", cur);

		for (int i = N; i > 0; i--) {
			if (graph[cur][i]) {
				if (!visit[i]) {
					s.push(i);
				}
			}
		}
	}

}

void BFS(int start) {

	queue<int> q;
	q.push(start);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		
		if(visit[cur]) continue;
		
		visit[cur] = true;
		printf("%d ", cur);
		
		for (int i = 1; i <= N; i++) {
			if (graph[cur][i]) {
				if (!visit[i]) {
					q.push(i);
				}
			}
		}
	}
}

void clrVisit(){
	for(int i = 0; i <= N; i++) {
		visit[i] = false;
	}
}

int main() {
	scanf("%d%d%d", &N, &M, &V);

	for (int i = 0; i < M; i++) {
		int s, e;
		scanf("%d%d", &s, &e);
		graph[s][e] = true;
		graph[e][s] = true;
	}

	// clrVisit();
	// recursionDFS(V);
	// printf("\n");
	
	clrVisit();
	stackDFS(V);
	printf("\n");
	
	clrVisit();
	BFS(V);
	printf("\n");

	return 0;
}