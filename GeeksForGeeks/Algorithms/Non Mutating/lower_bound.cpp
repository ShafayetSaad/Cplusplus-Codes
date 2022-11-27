#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Returns an iterator having address of element greater
	// than equal to given value in a given sorted range

	// Time Complexity
	// for Random Access Containers big O(log(n))
	// for others big O(n)
	// for sets, maps use their lower_bound
	
	vector<int> v = {10, 20, 20, 20, 30, 40};
	auto it = lower_bound(v.begin(), v.end(), 20);
	cout << (*it) << " ";
	cout << (it-v.begin()) << endl;

	it = lower_bound(v.begin(), v.end(), 25);
	cout << (*it) << " ";
	cout << (it-v.begin()) << endl;

	it = lower_bound(v.begin(), v.end(), 5);
	cout << (*it) << " "; // garbage value
	
	// if(it==v.end()){
	// 	cout << "Not found" << endl;
	// }
	cout << (it-v.begin()) << endl;

	// For arrays use
	// int *ptr = lower_bount(arr, arr+n, 20);

	return 0;
}	