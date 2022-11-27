#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	/*
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	// sort(start, end)
	sort(a, a+3);
	*/

	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a.begin()+2, a.end());

	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Hola";
	return 0;
}	