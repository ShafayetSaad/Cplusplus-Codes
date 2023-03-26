/*
Given 2d array a lot of N*N integers. Given Q queries and in each query given 
a, b, c and d. Print sum of square represented by (a, b) as top left point and (c,d) 
as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= a, b, c, d <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int N =1e3+10;
int ar[N][N];

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int n;
	// cin >> n;
	// for(int i=1; i<=n;i++){
	// 	for(int j=1;j<=n;j++){
	// 		cin >> ar[i][j];
	// 	}
	// }
	// int q;
	// cin >> q;
	// while(q--){
	// 	int a, b, c, d;
	// 	cin >> a >> b >> c >> d;
	// 	long long sum = 0;
	// 	for(int i=a;i<=c;i++){
	// 		for(int j=b;j<=d;j++){
	// 			sum += ar[i][j];
	// 		}
	// 	}
	// 	cout << sum << endl;
	// }
	// Time complexity O(N^2) + O(Q*N^2) == 10^5 * 10^6 == 10^11


	int n;
	cin >> n;
	for(int i=1; i<=n;i++){
		for(int j=1;j<=n;j++){
			int x;
			cin >> x;
			ar[i][j] = x + ar[i-1][j]	 + ar[i][j-1] - ar[i-1][j-1];
		}
	}
	
	int q;
	cin >> q;
	while(q--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << ar[c][d] - ar[a-1][d] - ar[c][b-1] + ar[a-1][b-1] << endl;
	}
	// Time complexity O(N^2) + O(Q) = 10^6
	return 0;
}	



