#include <bits/stdc++.h>
using namespace std;

#define int long long int


int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, a, b, d; cin >> t;
	while(t--){
		cin >> a >> b >> d;
		int ct = 0;
		for(int i=0; i<=d/b; i++){
			if((d-b*i)%a==0) ct++;
		}
		cout << ct << endl;

	}
	return 0;
}	

/*
int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, a, b, d; cin >> t;
	while(t--){
		cin >> a >> b >> d;
		Hackerearth video solution
		int mx = max(a, b);
		int mn = min(a, b);
		if(d == 0) cout << 1 << endl;
		else if(mn > d) cout << 0 << endl;
		else if(mx > d && mn <= d){
			if(d%mn == 0) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else{
			vector<int> vr;
			int ct = 0;
			while((d-(mx*ct)) >= 0 && vr.find((d-(mx*ct))%mn) == vr.end()){

			}
		}
	}
	return 0;
}
*/
