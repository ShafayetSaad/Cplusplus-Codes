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
	ll n;
	cin >> n;
	if(n%2==0) cout << n/2 << endl;
	else{
		cout << n/2 - n << endl;
	}
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