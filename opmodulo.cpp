#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+7;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int a, b;
	cin >> a >> b;
	long long int ans = 0;
	long long index = 1;
	while(index < b){
		if(index >= a){
			ans += index;
		}
		index = 2*index;
	}
	cout << ans << endl;
	return 0;
}	