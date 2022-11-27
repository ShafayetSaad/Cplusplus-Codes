#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int ans = 0;
	int n = INT_MAX;
	for(int i=1;i<n;i++){
		int j=1;
		for(j=1;j<=20;j++){
			if(i%j!=0){
				break;
			}
		}
		if(j==21){
			cout << i << endl;
			break;
		}
	}
	return 0;
}	