#include <bits/stdc++.h>
using namespace std;

int clearIthBit(int x, int i){
	int mask = ~(1<<i);
	return (x & mask);
}

int updateIthBit(int x, int i,int value){
	x = clearIthBit(x, i);
	int mask = (value<<i);
	return (x | mask);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x = 5;
	int i = 3;
	cout << updateIthBit(x, i, 1) << endl;
	return 0;
}	