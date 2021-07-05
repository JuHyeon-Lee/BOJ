#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		string p, x;
		int n;
		deque<int> d;
		bool dir = true;
		bool error = false;
		
		cin >> p >> n >> x;
		
		string num = "";
		for(int i=1; i<x.length(); i++){
			if(x[i]==',' || x[i]==']'){
				if(num!="") d.push_back(atoi(num.c_str()));
				num = "";
			} else {
				num += x[i];
			}
		}
		
		for(int i=0; i<p.length(); i++){
			char c = p[i];
			if(c=='R') dir = !dir;
			else if(c=='D'){
				if(d.empty()){
					error = true;
					break;
				}
				
				if(dir) d.pop_front();
				else d.pop_back();
			}
		}
		
		if(error) cout << "error\n";
		else{
			cout << "[";
			while(!d.empty()){
				if(dir){
					cout << d.front();
					d.pop_front();
				} else {
					cout << d.back();
					d.pop_back();
				}
				
				if(!d.empty()) cout << ",";
			}
			cout << "]\n";
		}
	}
	
	return 0;
}