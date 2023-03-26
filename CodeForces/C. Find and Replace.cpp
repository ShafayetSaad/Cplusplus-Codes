#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string str; cin >> str;
		string odd="", even="";
		for(int i=0; i<n; i++){
			if(i%2==0) odd+=str[i];
			else even+=str[i];
		}
		sort(even.begin(), even.end());
		sort(odd.begin(), odd.end());
		int a=0, b=0;
		bool flag = true;
		while(a<odd.length() && b<even.length()){
			if(odd[a] < even[b]) a++;
			else if(odd[a] > even[b]) b++;
			else if(odd[a] == even[b]){
				flag = false;
				break;
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
		// cout << odd << endl;
		// cout << even << endl;
	}
	return 0;
}	