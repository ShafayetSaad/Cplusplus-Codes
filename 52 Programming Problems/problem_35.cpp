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
		int x, y, r, a, b;
		cin >> x >> y >> r >> a >> b;
		int lside = (a-x)*(a-x) + (y-b)*(y-b);
		int rside = r*r;
		if(lside<=rside){
			cout << "The point is inside the circle" << endl;
		}
		else{
			cout << "The point is not inside the circle" << endl;
		}
	}
	return 0;
}	