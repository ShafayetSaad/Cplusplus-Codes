#include <bits/stdc++.h>
using namespace std;

#define ll			long long int
#define ull			unsigned long long int
#define F			first
#define S			second
#define pb			push_back
#define nl			"\n"
#define all(p)		p.begin(), p.end()
#define print(a)	for(auto x : a) cout << x << " "; cout << nl;

void solve(){
	int k, l, m, n, d, ct=0;
	cin >> k >> l >> m >> n >> d;
	for(int i=1; i<=d; i++){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0) ct++; 
	}
	cout << ct << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	// cin >> t;
	while(t--) solve();
	return 0;
}	