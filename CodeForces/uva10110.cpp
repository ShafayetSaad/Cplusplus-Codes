#include <bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n, x;
	while(true){
		cin >> n;
		if(n==0) break;
		x=sqrt(n);
        
        if(n==x*x) printf("yes\n");
        else printf("no\n");
	}
	return 0;
}	