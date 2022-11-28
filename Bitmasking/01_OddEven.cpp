#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// 5 = 00000101
	// 6 = 00000110
	// odd number has last bit 1 and even has 0
	// 1 = 00000001
	// (5 & 1) = 00000001
	// (6 & 1) = 00000000
	
	int x = 11;
	if(x & 1){
		cout << "Odd" << endl;
	}
	else{
		cout << "Even" << endl;
	}
	return 0;
}	