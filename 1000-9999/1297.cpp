#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int C1, W1, H1;
	cin >> C1 >> W1 >> H1;
	
	double C2 = sqrt(W1*W1 + H1*H1);
	double W2 = W1 * (C1 / C2);
	double H2 = H1 * (C1 / C2);
	
	cout << (int)W2 << " " << (int)H2 << "\n";
	
	return 0;
}