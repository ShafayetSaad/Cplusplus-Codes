#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Time Complexity big O(n)
	
	vector<int> v{10, 20, 30, 40, 50, 60};
	for(auto x:v){ cout << x << " ";}
	cout << endl;
	// begin   mid   end
	rotate(v.begin(), v.begin()+2, v.end());

	for(auto x:v){ cout << x << " ";}
	cout << endl;
	return 0;
}	