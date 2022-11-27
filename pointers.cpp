#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 10;
	cout << &x << endl;

	int *xpntr = &x;
	cout << xpntr << endl;
	// cout << &xpntr << endl;
	cout << *xpntr << endl;
	cout << *(&x) << endl;
	//Pointer to a pointer
	int **xxpntr = &xpntr;
	// cout << xxpntr << endl;

	//Null pointer
	int *p = 0;
	int *q = NULL;

	return 0;
}