#include <bits/stdc++.h>
using namespace std;

void perfectNum(long long n){
	if(n<3){return;}

	for(long long i=3;i<=n;i++){
		long long sum = 1;
		for(long long j=2;j<=sqrt(i);j++){
			if(i%j==0){
				if(j*j!=i){
                	sum = sum + j + i/j;
				}
            	else{
                	sum=sum+j;
            	}
			}
		}
		if(sum==i){
			cout << i << endl;
		}
	}
	cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		perfectNum(n);
	}
	return 0;
}	