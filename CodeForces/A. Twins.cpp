#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> vr(n);
	for(int i=0; i<n; i++) cin >> vr[i];
	sort(vr.begin(), vr.end());
	int sum = accumulate(vr.begin(), vr.end(), 0);
	int ct = 0;
	int temp = 0;
	for(int i=n-1; i>=0; i--){
		temp += vr[i];
		ct++;
		if(temp > (sum-temp)){
			cout << ct << endl;
			return 0;
		}
	}
	return 0;
}	