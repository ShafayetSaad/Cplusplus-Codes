#include <bits/stdc++.h>
using namespace std;

double eps = 1e-6;
double multiply(double mid, int n){
	double ans = 1;
	for(int i=0; i<n; i++){
		ans *= mid;
	}
	return ans;
}

double nthRoot(double num, int n){
	double lo = 1, hi = num, mid;
	while(hi - lo > eps){
		mid = lo + (hi-lo)/2;
		if(multiply(mid, n) < num) lo = mid;
		else hi = mid;
	}
	return hi;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	double x = 4;
	int n = 2;
	// cout << setprecision(10);
	cout << nthRoot(x, n) << endl;
	return 0;
}	