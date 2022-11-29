#include <bits/stdc++.h>
using namespace std;

int clearBitsInRange(int n, int i, int j){
	int mask = (~0)<<(j+1); 
	
	// This is not a good approch
	// int mk = 0;
	// for(int k=0;k<i;k++){
	// 	mk = ((mk<<1)|1);
	// }

	// Try this
	// mk = 00001111 = 15
	// 16 = 00010000 == (1<<4)
	// (16-1) = 15
	int mk = ((1<<i)-1);


	mask = (mask|mk);
	return (n&mask);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  101111111111  3071
	//  101110000000
	cout << clearBitsInRange(3071, 3, 7) << endl;
	return 0;
}	
