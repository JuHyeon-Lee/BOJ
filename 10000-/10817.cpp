#include <iostream>
#include <vector>

using namespace std;

void insert(vector<int> &v, int num){
	vector<int>::iterator it = v.begin();
	while(it!=v.end()){
		if(*it<num) break;
		it++;
	}
	v.insert(it, num);
}

int main(){
	
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	
	vector<int> v;
	
	insert(v, A);
	insert(v, B);
	insert(v, C);

	printf("%d", v[1]);
	
	return 0;
}