#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> v;

string arr1[8] = {"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"};
string arr2[8] = {"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"};

int cntWrong(int x, int y){
	int cnt1 = 0;
	int cnt2 = 0;
	
	for(int i=x; i<x+8; i++){
		for(int j=y; j<y+8; j++){
			if(arr1[i-x][j-y]!=v[i][j]) cnt1++;
			if(arr2[i-x][j-y]!=v[i][j]) cnt2++;
		}
	}
	
	if(cnt1<cnt2) return cnt1;
	else return cnt2;
}

int main(){
	
	int N, M;
	scanf("%d%d", &N, &M);
	
	for(int i=0; i<N; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	
	int min = 64;
	for(int i=0; i<=N-8; i++){
		for(int j=0; j<=M-8; j++){
			int cnt = cntWrong(i, j);
			if(cnt<min) min = cnt; 
		}
	}
	
	printf("%d\n", min);
	
	return 0;
}