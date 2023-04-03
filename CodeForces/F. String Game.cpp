#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(string a, string b){
	for(int i=0; i<a.size(); i++){
		
	}
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string p, t; cin >> p >> t;
	int arr[26]{0};

	int n;
	int ct = 0;
	for(int i=0; i<p.size(); i++){
		cin >> n;
		if(temp[p[n-1]-'a'] == 1){
			if(arr[p[n-1]-'a'] == 0){
				break;
			}
			else arr[p[n-1]-'a']--;
		}
		else arr[p[n-1]-'a']--;
		ct++;
		cout << endl;
		for(int i=0; i<26; i++){
			cout << arr[i] << " ";
		}cout << endl;
	}
	cout << ct << endl;
	return 0;
}	