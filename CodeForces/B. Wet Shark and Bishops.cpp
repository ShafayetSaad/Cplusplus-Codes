#include <bits/stdc++.h>
using namespace std;

#define int long long

int factorial(int n){
	int res = 1;
	for(int i=n-1;i<=n;i++){
		res *= i;
	}
	return res/2;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<pair<pair<int, int>, int>> vr;
	map<int, int> mpa, mpb;
	int x, y;
	while(n--){
		cin >> x >> y;
		mpa[x+y]++;
		mpb[x-y]++;
		// bool flag = true;
		// for(auto &value : vr){
		// 	if(abs(x - value.first.first) == abs(y - value.first.second)){
		// 		value.second++;
		// 		flag = false;
		// 		// break;
		// 	}
		// }
		// if(flag) vr.push_back({{x, y}, 1});
	}
	int ans = 0;
	// for(auto &value : vr){
	// 	// cout << value.second << endl;
	// 	ans += (factorial(value.second));
	// }
	for(auto value : mpa){
		// cout << value.first << " " << value.second << endl;
		ans += factorial(value.second);
	}
	for(auto value : mpb){
		// cout << value.first << " " << value.second << endl;
		ans += factorial(value.second);
	}
	cout << ans << endl;
	return 0;
}	