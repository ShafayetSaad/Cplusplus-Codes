#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
	if(n<2){
		return 0;
	}
	if(n==2) return 1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int count = 0;
		for(int i=a;i<=b;i++){
			if(isPrime(i)){
				count++;
			}
		}
		cout << count << endl;

	}
	return 0;
}	