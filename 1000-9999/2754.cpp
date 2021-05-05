#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string score;
	cin >> score;
	
	float sc = 0.0;
	sc += 69 - score[0];
	if(sc < 0) sc = 0.0;
	
	if(score.length()>=2){
		if(score[1]=='+') sc += 0.3;
		else if(score[1]=='-') sc -= 0.3;
	}
	
	printf("%.1f\n", sc);
	
	return 0;
}