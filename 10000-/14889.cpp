#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> v;
vector<int> team;
int teamArr[20];
int minDiff = 1001;

void cntDiff(){
	for(int i=0; i<team.size(); i++){
		teamArr[team[i]] = 1;
	}
	
	int teamA = 0;
	int teamB = 0;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(j!=i){
				if(teamArr[i] && teamArr[j]) teamA += v[i][j];
				if(!teamArr[i] && !teamArr[j]) teamB += v[i][j];
			}
		}
	}
	
	int diff = teamA - teamB;
	if(diff<0) diff *= -1;
	
	if(diff<minDiff) minDiff = diff;
	
	for(int i=0; i<20; i++){
		teamArr[i] = 0;
	}
}

void selectTeam(int cur){
	if(team.size()==N/2){
		cntDiff();
		return;
	}
	
	for(int i=cur; i<N; i++){
		team.push_back(i);
		selectTeam(i+1);
		team.pop_back();
	}
}

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		vector<int> row;
		for(int j=0; j<N; j++){
			int stat;
			scanf("%d", &stat);
			row.push_back(stat);
		}
		v.push_back(row);
	}
	
	selectTeam(0);
	
	printf("%d\n", minDiff);
	
	return 0;
}