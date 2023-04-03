#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k, x; cin >> n >> k;
	int ct=0;
	string str;
	while(n--){
		vector<int> vr(k+1, 0);
		cin >> str;
		for(int i=0; i<str.length(); i++){
			x = str[i]-48;
			if(x<=k) vr[x]++;
		}
		bool flag = true;
		for(int i=0; i<=k; i++){
			if(vr[i]==0){
				flag = false;
				break;
			}
		}
		if(flag) ct++;
	}
	cout << ct << endl;
	return 0;
}	