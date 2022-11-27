#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, a+n);

	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;

	int *ptr = lower_bound(a, a+n, 6);
	if(ptr == a+n){
		cout << "Not found";
		return 0;
	}
	cout << *ptr << endl;
	
	ptr = upper_bound(a, a+n, 4);
	if(ptr == a+n){
		cout << "Not found";
		return 0;
	}
	cout << *ptr << endl;
	// For vector use .begin .end and iterator
	// auto it = upper_bound(a.begin(), a.end(), 5);

	// For set and map use s.lower_bound(5)
	return 0;
}	