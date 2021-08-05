#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student{
	string name;
	int d, m, y;
};

bool comp(Student A, Student B){
	if(A.y==B.y){
		if(A.m==B.m){
			return A.d < B.d;
		} else {
			return A.m < B.m;
		}
	} else {
		return A.y < B.y;
	}
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	
	vector<Student> v;
	
	for(int i=0; i<n; i++){
		string name;
		int d, m, y;
		cin >> name >> d >> m >> y;
		v.push_back({name, d, m, y});
	}
	
	sort(v.begin(), v.end(), comp);
	
	cout << v[n-1].name << "\n" << v[0].name << "\n";
	
	return 0;
}