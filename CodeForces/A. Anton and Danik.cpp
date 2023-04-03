#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	string str; cin >> str;
	int anton=0, danik=0;
	for(int i=0; i<n; i++){
		if(str[i] == 'A') anton++;
		else danik++;
	}
	if(anton > danik) cout << "Anton\n";
	else if(anton < danik) cout << "Danik\n";
	else cout << "Friendship\n";
	return 0;
}	