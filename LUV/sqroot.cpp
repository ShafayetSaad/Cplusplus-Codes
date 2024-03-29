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

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	double x;
	int n;
	cin >> x >> n;
	double lo = 1, hi = x, mid;
	while(hi - lo > eps){
		mid = (hi+lo)/2;
		if(multiply(mid, n) < x) lo = mid;
		else hi = mid;
	}
	cout << setprecision(10);
	cout << lo << " " << hi << endl;
	
	return 0;
}	