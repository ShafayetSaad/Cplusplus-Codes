#include <bits/stdc++.h>
using namespace std;
#define int long long int

double eps = 1e-7;

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	double c; cin >> c;
	double lo=0, hi=c, mid;
	while(hi-lo > eps){
		mid = lo + (hi-lo)/2;
		if((pow(mid, 2)+pow(mid, .5)) > c) hi = mid;
		else lo = mid; 
	}
	cout << fixed << setprecision(15);
	cout << lo << endl;
	return 0;
}	