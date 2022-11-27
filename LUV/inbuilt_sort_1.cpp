#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first){
		return a.first > b.first;
	}
	return a.second > b.second;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end(), cmp);

	for(int i=0;i<n;i++){
		cout << a[i].first << " " << a[i].second << endl;
	}
	cout << "Hola";
	return 0;
}	