#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

vector<pair<ll, ll>> vp(1e5+10);
vector<ll> v;
vector<ll> ans(1e5+10);

bool myCmp(pair<ll, ll> a, pair<ll, ll> b){
	if(a.first != b.first){
		return a.first < b.first;
	}
	return a.second > b.second;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, k; cin >> n >> k;
	
	for(ll i=0; i<n; i++) cin >> vp[i].first;
	for(ll i=0; i<n; i++) cin >> vp[i].second;
	sort(vp.begin(), vp.begin()+n, myCmp);
	

	// for(auto x : vp){
	// 	cout << x.first << " " << x.second << endl;
	// }

	
	ll ct = k;
	for(ll i=0; i<n; i++){
		if(!ans[vp[i].first]){
			ans[vp[i].first] = 1; ct--;
		}
		else v.push_back(vp[i].second);
	}
	// cout << ct << endl;
	// for(auto x : ans){
	// 	cout << x << " ";
	// }cout << endl;


	sort(v.begin(), v.end());
	// ll sum = accumulate(v.begin(), v.begin()+ct, 0);
	ll sum = 0;
	for(int i=0; i<ct; i++){
		sum += v[i];
	}
	cout << sum << endl;

	return 0;
}	