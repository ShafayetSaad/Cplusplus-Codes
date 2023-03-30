#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2e6+10;
int arr[N];
int hp[N];

vector<int> distinctPF(int x){
	while(x > 1){
		int pf = hp[x];
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	for(int i=0; i<N; i++){
		if(hp[i] == 0){
			for(int j=i; j<N; j+=i){
				hp[j] = i;
			}
		}
	}

	ll n, q; cin >> n >> q;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int x;
	while(q--){
		cin >> x;

	}

	return 0;
}	
