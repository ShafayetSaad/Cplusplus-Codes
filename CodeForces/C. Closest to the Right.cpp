#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool binary_search(vector<ll> v, int x){
	int hi = v.size()-1;
	int lo = 0;
	int mid;
	while(hi-lo > 1){
		mid = (hi+lo)/2;
		if(v[mid] == x ) return true;
		else if(v[mid] > x) hi = mid-1;
		else lo = mid+1;
	}
	if(v[hi] == x) return true;
	else if(v[lo] == x) return true;
	else return false;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, k; cin >> n >> k;
	vector<ll> vr(n);
	for(int i=0; i<n; i++) cin >> vr[i];

	int hi, lo, mid, num;
	for(int i=0; i<k; i++){
		cin >> num;
		hi = n-1, lo = 0;
		bool flag = false;
		while(hi-lo > 1){
			mid = (hi+lo)/2;
			if(vr[mid] < num) lo = mid + 1;
			else hi = mid;
		}
		if(vr[lo] >= num) cout << lo+1 << endl;
		else if(vr[hi] >= num) cout << hi+1 << endl;
		else cout << n+1 << endl;

	}

	return 0;
}	