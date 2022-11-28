#include <bits/stdc++.h>
using namespace std;

int clearLastIbits(int n, int i){
	int mask = (~0)<<i;
	return n&mask;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << clearLastIbits(15, 2) << endl;
	return 0;
}	