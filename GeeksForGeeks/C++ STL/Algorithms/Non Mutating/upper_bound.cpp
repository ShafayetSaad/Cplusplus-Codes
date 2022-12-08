#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Returns an iterator having address of first element greater
	// than to given value in a given sorted range

	// Time Complexity
	// for Random Access Containers big O(log(n))
	// for others big O(n)
	// for sets, maps use their upper_bound
	
	vector<int> v = {10, 20, 20, 20, 30, 40};
	auto it = upper_bound(v.begin(), v.end(), 20);
	cout << (*it) << endl;
	cout << (it-v.begin()) << endl;

	it = upper_bound(v.begin(), v.end(), 25);
	cout << (*it) << endl;
	cout << (it-v.begin()) << endl;

	it = upper_bound(v.begin(), v.end(), 50);
	cout << (*it) << endl; // garbage value
	
	if(it==v.end()){
		cout << "Not found" << endl;
	}
	cout << (it-v.begin()) << endl;

	// For arrays use
	// int *ptr = upper_bount(arr, arr+n, 20);

	return 0;
}	