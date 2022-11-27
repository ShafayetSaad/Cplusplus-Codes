#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x, ans;
	cin >> n;
	ans = 0;
	while(n--){
		int sum = 0;
		for(int i=0;i<3;i++){
			cin >> x;
			sum += x;
		}
		if(sum>=2){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}	