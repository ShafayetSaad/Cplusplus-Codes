#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 1000;
	int sum = 0;
	for(int i=0;i<n;i++){
		if(i%3==0 || i%5==0){
			sum += i;
		}
	}
	cout << sum;
	return 0;
}	