#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Time Complexity is big O(n)
	vector<int> v{5, 4, 1, 2, 3};
	prev_permutation(v.begin(), v.end());
	for(auto x : v){
		cout << x << " ";
	}cout << endl;
	return 0;
}	