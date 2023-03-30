#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5+50;
vector<ll> vr(N);
ll arr[N];

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n; cin >> n;
	int x;
	for(ll i=0; i<n; i++){
		cin >> x;
		arr[x]++;
	}
	for(int i=1; i<N; i++){
		for(int j=i; j<N; j+=i){
			vr[i] += arr[j];
		}
	}
	ll t; cin >> t;
	ll p, q;
	while(t--){
		cin >> p >> q;
		ll ans = 0;
		ans += vr[p];
		ans += vr[q];
		ll lcm = (p*q)/__gcd(p, q);
		// cout << lcm << endl;
		if(lcm < N) ans -= vr[lcm];
		cout << ans << endl;
	}
	return 0;
}	

/*
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    const int N = 2e5+50;
    vector<ll> vr(N);
     
    void divisors(ll n){
    	ll i;
    	for(i=1; i*i<=n; i++){
    		if(n%i==0){
    			vr[i]++;
				if(i != n/i){
					vr[n/i]++;
				}
    		}
    	}
    }
     
    int main(){
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif
    	ll n; cin >> n;
    	ll arr[n];
    	for(ll i=0; i<n; i++){
    		cin >> arr[i];
    		divisors(arr[i]);
    	}
    	ll t; cin >> t;
    	ll p, q;
    	while(t--){
    		cin >> p >> q;
    		ll ans = 0;
    		ans += vr[p];
    		ans += vr[q];
    		ll lcm = (p*q)/__gcd(p, q);
    		// cout << lcm << endl;
    		if(lcm < N) ans -= vr[lcm];
    		cout << ans << endl;
    	}
    	return 0;
    }	
*/