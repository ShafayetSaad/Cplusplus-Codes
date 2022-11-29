#include <bits/stdc++.h>
using namespace std;

int convertToBinary(int n){
	if(n==0){
		return 0;
	}
	int ans = 0;
	int power = 1;
	while(n>0){
		int last_bit = (n&1);
		ans = ans + power*last_bit;
		power *= 10;
		n = n>>1;
	}
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << convertToBinary(0) << endl;
	cout << convertToBinary(1) << endl;
	cout << convertToBinary(2) << endl;
	cout << convertToBinary(5) << endl;
	cout << convertToBinary(7) << endl;
	cout << convertToBinary(8) << endl;
	cout << convertToBinary(16) << endl;

	return 0;
}	