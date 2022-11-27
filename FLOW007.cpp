#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin>> t;
	while(t--){
		int num, revNum = 0;
		cin >> num;
		while(num){
			revNum *= 10;
			revNum += (num%10);
			num = num/10;
		}
		cout << revNum << endl;
	}
	return 0;
}	