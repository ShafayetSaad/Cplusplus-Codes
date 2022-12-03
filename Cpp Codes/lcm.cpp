/*
LCM - Least common multiple
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a = 10, b = 15;
	int i = max(a, b);
	int ans = i;
	for(i;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			ans = i;
			break;
		}
	}
	cout << ans;
	return 0;
}	