#include <bits/stdc++.h>
using namespace std;



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n = 36;
	int ct = 0;
	int sum = 0;
	for(int i=1; i*i<=n; i++){
		if(n%i == 0){
			if(i == (n/i)){
				ct++;
				sum += i;
				continue;
			}
			ct += 2;
			sum += i;
			sum += (n/i);
		}
	}
	cout << ct << " " << sum << endl;

	return 0;
}	