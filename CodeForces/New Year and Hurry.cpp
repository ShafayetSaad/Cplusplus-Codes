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
	int n, k, t=240, ct=0, i;
	cin >> n >> k;
	int arr[11];
	for(int i=0; i<11; i++){
		arr[i] = i*5;
	}

	t = t-k;
	for(i=1; i<11; i++){
		if(arr[i]>t) break;
		t -= arr[i];
	}
	if(i>n) cout << n << endl;
	else cout << --i << endl;
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