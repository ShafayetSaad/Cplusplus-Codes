#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 100;
	int sq_sum = (n*(n+1)*(2*n+1))/6;
	int sum_sq = (n*(n+1)/2)*(n*(n+1)/2);
	cout << sum_sq - sq_sum;
	return 0;
}	