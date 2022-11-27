/*
Editorials

If the given n is odd the answer is 0, because the perimeter of any rectangle
is always even number.

If n is even the number of rectangles which can be construct equals to n/4.
If n is divisible by 4 we will count the square, which are deprecated,
because we need to subtract 1 from the answer.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	if(n%2==1){
		cout << 0;
	}
	else if(n%4==0){
		cout << n/4-1;
	}
	else{
		cout << n/4;
	}
	return 0;
}	