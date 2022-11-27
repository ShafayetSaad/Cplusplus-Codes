/*
Given array a of N integers. Given Q queries and in each query given L and R.
Print sum of array elements from index L to R(L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	// int n;
	// cin >> n;
	// for(int i=1;i<=n;i++){
	// 	cin >> a[i];
	// }
	// int q;
	// cin >> q;
	// while(q--){
	// 	int l, r;
	// 	cin >> l >> r;
	// 	long long sum = 0;
	// 	for(int i=l; i<=r; i++){
	// 		sum += a[i];
	// 	}
	// 	cout << sum << endl;
	// }
	// Time complexity O(N)+O(Q*N) = 10^10


	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int x;
		cin >> x;
		a[i] = a[i-1] + x;
	}
	// for(auto &value : a){
	// 	cout << value << endl;
	// }
	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << a[r] - a[l-1] << endl;
	}
	// Time complexity O(N)+O(Q) = 10^5


	return 0;
}	