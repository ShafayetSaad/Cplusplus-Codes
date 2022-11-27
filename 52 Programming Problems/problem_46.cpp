#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		double a, b, c;
		cin >> a >> b >> c;
		double s = (a+b+c)/2.0;
		double ans = sqrt(s*(s-a)*(s-b)*(s-c));
		cout << fixed << setprecision(3);
		cout << "Area = " << ans << endl;
	}
	return 0;
}	