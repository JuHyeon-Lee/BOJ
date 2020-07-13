#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> v;
vector<char> w;

bool visit[12];

int minVal = 1000000000;
int maxVal = -1000000000;

void calc(vector<char> tmp){
	int sum = v[0];
	for(int i=0; i<N-1; i++){
		switch(tmp[i]){
			case '+':
				sum+=v[i+1];
				break;
			case '-':
				sum-=v[i+1];
				break;
			case '*':
				sum*=v[i+1];
				break;
			case '/':
				sum/=v[i+1];
				break;
		}
	}
	
	if(sum<minVal)
		minVal = sum;
	if(sum>maxVal)
		maxVal = sum;
}

void perm(vector<char> tmp, int cnt){
	if(cnt==N-1){
		calc(tmp);
		return;
	}
	
	for(int i=0; i<w.size(); i++){
		if(!visit[i]){
			tmp.push_back(w[i]);
			visit[i] = true;
			perm(tmp, cnt + 1);
			tmp.pop_back();
			visit[i] = false;
		}
	}
}

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	
	for(int i=0; i<4; i++){
		int num;
		scanf("%d", &num);
		
		for(int j=0; j<num; j++){
			switch(i){
				case 0:
					w.push_back('+');
					break;
				case 1:
					w.push_back('-');
					break;
				case 2:
					w.push_back('*');
					break;
				case 3:
					w.push_back('/');
					break;
			}
		}
	}
	
	vector<char> tmp;
	perm(tmp, 0);
	
	printf("%d\n%d\n", maxVal, minVal);
	
	return 0;
}