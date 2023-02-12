#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){
	int sum = 0;
	while(n>0){
		sum += (n%10);
		n /= 10;
	}
	return sum;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t, n, x, y, sum;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<=(n/2); i++){
			x = i;
			y = n-i;
			sum = abs(digitSum(x)-digitSum(y));
			if(sum==0 || sum==1){
				cout << x << " " << y << endl;
				break;
			}
		}
	}
	return 0;
}	