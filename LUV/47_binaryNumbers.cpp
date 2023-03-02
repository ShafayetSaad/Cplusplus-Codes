#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=16; i>=0; i--){
		cout << ((num >> i) & 1);
	}
	cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << INT_MAX << endl;
	int a = 1 << 5; // 1<<n = 2^n
	cout << a << endl;
	a = (1LL<<32) - 1;
	cout << a << endl;
	a = (1LL<<31) - 1;
	cout << a << endl;
	unsigned int b = (1LL<<32) - 1;
	cout << b << endl;

	cout << __builtin_popcount(a) << endl;
	cout << __builtin_popcount(b) << endl;
	cout << __builtin_popcountll((1LL<<35)-1) << endl;

	cout << (5 >> 2) << endl;
	printBinary(5);
	printBinary(6);


	int n=6;
	if(n&1) cout << "Odd\n";
	else cout << "Even\n";

	cout << (n >> 1) << endl; // divide by 2

	// uppercase and lowercase
	// in uppercase 5th bit is not set
	// in lowercase 5th bit is set
	printBinary(int('A'));
	printBinary(int('a'));
	printBinary(int('E'));
	printBinary(int('e'));
	char ch = 'A';
	ch = ch | (1<<5);
	cout << ch << endl;

	ch = ch & (~(1<<5));
	cout << ch << endl;

	cout << char(ch & '_') << endl;
	cout << char('a' & '_') << endl; // AND with underscore
	cout << char('A' | ' ') << endl; // OR with space

	printBinary(int('_'));
	printBinary(int(' '));
	printBinary(1<<5);

	cout << endl;
	printBinary(1<<6);
	printBinary((1<<6) - 1);

	cout << endl;
	printBinary(59);
	n = 59;
	int i = 4;
	n = (n & (~((1<<(i+1))-1)));
	printBinary(n);
	n = 59;
	i = 3;
	n = (n & (((1<<(i+1))-1)));
	printBinary(n);

	n = 16;
	if(n & (n-1)){
		cout << "No power of 2\n";
	}
	else cout << "Power of 2\n";

	return 0;
}	