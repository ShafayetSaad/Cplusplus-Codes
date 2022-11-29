#include <bits/stdc++.h>
using namespace std;

bool isPythagorean(int a,int b, int c){
	int mx = max(a, b);
	int x = min(a, b);
	int y = min(mx, c);
	mx = max(mx, c);
	return (mx*mx == (x*x + y*y));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << isPythagorean(13, 12, 5) << endl;

	for(int i=1; i<=1000; i++){
		for(int j=1; j<=1000; j++){
			for(int k=1; k<=1000; k++){
				if((i+j+k)==1000){
					if(isPythagorean(i, j, k)){
						cout << i << " " << j << " " << k << endl;
						cout << (i*j*k) << endl;
						return 0;
					}
				}
			}
		}
	}

	return 0;
}	