#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
	int res = 0;
	while(n>0){
		res = res + (n&1);
		n = (n>>1);
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << countSetBits(15) << endl;
	cout << countSetBits(16) << endl;

	return 0;
}	