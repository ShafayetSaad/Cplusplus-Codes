/*
You are given two 32 bit numbers, N and M, and two positions i and j.
Write a method to set all bits between i and j in N equal to M.
M (becomes a substring of N locationed at and starting j)

Example:
N = 1000000000
M = 10101
i = 2, j = 6
output: 1001010100
*/
#include <bits/stdc++.h>
using namespace std;

int clearBitsInRange(int n, int i, int j){
	int mask = (~0)<<(j+1); 
	
	int mk = ((1<<i)-1);

	mask = (mask|mk);

	return (n&mask);
}

void replaceBits(int &n, int i, int j, int m){
	n = clearBitsInRange(n, i, j);
	int mask = (m<<i);
	n = n | mask;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n = 15, i = 1, j = 3, m = 2;
	replaceBits(n, i, j, m);
	cout << n << endl;

	return 0;
}	