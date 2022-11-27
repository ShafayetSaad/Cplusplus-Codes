#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int x = 3;
	int y = 6;
	cout << (x&y) << endl;
	cout << (x|y) << endl;
	cout << (x^y) << endl;
	return 0;
}	