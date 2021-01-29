#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int cnt[8001];

int main(){
	
	int N;
	scanf("%d", &N);
	
	vector<int> v;
	double sum = 0;
	int maxCnt = 0;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		sum += num;
		cnt[num+4000]++;
		if(cnt[num+4000]>maxCnt) maxCnt = cnt[num+4000];
		v.push_back(num);
	}
	
	// 산술평균
	printf("%.lf\n", round(sum/N));
	
	sort(v.begin(), v.end());
	
	// 중앙값
	printf("%d\n", v[N/2]);
	
	// 최빈값
	vector<int> can;
	for(int i=0; i<=8000; i++){
		if(cnt[i]==maxCnt) can.push_back(i-4000); 
	}
	if(can.size()>1) printf("%d\n", can[1]);
	else printf("%d\n", can[0]);
	
	// 범위
	printf("%d\n", v[N-1]-v[0]);
	
	return 0;
}