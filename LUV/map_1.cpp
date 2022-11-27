/*
Given N strings, print unique strings in lexiographical order with their
frequency

N <= 10^5
|S| <= 100
input: 
8
abc
def
abc
ghj
jkl
ghj
abc
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	map<string, int> m;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		m[s]++;
	}
	for(auto pr : m){
		cout << pr.first << " " << pr.second << endl;
	}

	return 0;
}	