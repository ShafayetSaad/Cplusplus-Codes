#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		double food;
		cin >> food;
		int days = 0;
		while(food>1){
			days++;
			food /= 2.0;
		}
		cout << days << " days" << endl;
	}
	return 0;
}	