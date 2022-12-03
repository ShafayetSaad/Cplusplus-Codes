#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int count = 0;
	int a = 1;
	int b = 0;
	
	for(int i=1;i<n/2;i++){
		b = 1;
		for(int j=0;j<a;j++){
			if(a==b){
				continue;
			}
			if((a*2+b*2)==n){
				count++;
			}
			b++;
		}
		a++;
	}
	cout << count;
	return 0;
}