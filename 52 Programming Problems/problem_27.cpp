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
		int num;
		cin >> num;
		int total = 0;
		int n = num;
		while(n>0){
			int last = n%10;
			total = total + last*last*last;
			n /= 10;
		}
		if(num==total){
			cout << num << " is an armstrong number!" << endl;
		}else{
			cout << num << " is not an armstrong number!" << endl;
		}
	}
	return 0;
}	