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
		float total, current, balls;
		cin >> total >> current >> balls;
		float cr = current/((300-balls)/6);
		float rr = (total+1-current)/(balls/6);
		cout << fixed;
		cout << setprecision(2);
		cout << cr << " " << rr << endl;
	}
	return 0;
}	