#include <bits/stdc++.h>
using namespace std;

int getIthBit(int x, int i){
	int mask = (1<<i);
	return (x & mask) > 0 ? 1: 0;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// 5 = 0 0 0 0 0 1 0 1
	// ith 7 6 5 4 3 2 1 0

	//    1 = 0 0 0 0 0 0 0 1
	// 1<<i = 0 0 0 0 0 1 0 0  (i=2)
	//res = (5&(1<<i)) = 0 0 0 0 0 1 0 0
	// if(res == 0) cout 0
	// else cout 1



	int n = 5;
	int i = 0;
	cout << getIthBit(n, i) << endl;
	return 0;
}	