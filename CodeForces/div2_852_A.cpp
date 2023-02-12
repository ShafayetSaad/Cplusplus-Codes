#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	unsigned long long a, b, m, ans, temp, num, res;
	long long n;
	cin >> t;
	while(t--){
		ans = 0;
		cin >> a >> b;
		cin >> n >> m;
		temp = n/(m+1);
		num = n%(m+1);
		ans = temp*m*a;
		if(num!=0){
			ans += min(num*a, num*b);
		}
		res = min(n*a, n*b);
		cout << min(ans, res) << endl;
	}

	return 0;
}	