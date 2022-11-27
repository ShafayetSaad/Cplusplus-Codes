#include <iostream>
using namespace std;

int getBit(int n, int pos){
	return ((n & (1<<pos))!=0);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << getBit(5, 2);
	return 0;
}	