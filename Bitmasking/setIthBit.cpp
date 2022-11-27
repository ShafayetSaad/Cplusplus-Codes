#include <bits/stdc++.h>
using namespace std;

int setIthBit(int n, int i){
	int mask = 1<<i;
	return (n|mask);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// 5 = 0 0 0 0 0 1 0 1
	// ith 7 6 5 4 3 2 1 0

	//    1 = 0 0 0 0 0 0 0 1
	// 1<<i = 0 0 0 0 0 1 0 0  (i=1)
	//res = (5|(1<<i)) = 0 0 0 0 0 1 1 1

	int n = 5;
	int i = 1;
	cout << setIthBit(n, i) << endl;
	return 0;
}	