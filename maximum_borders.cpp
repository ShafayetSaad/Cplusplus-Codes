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
		int n, m;
		cin >> n >> m;
		int max = 0;
		for(int i=0;i<n;i++){
			int count = 0;
			for(int i=0;i<m;i++){
				char ch;
				cin >> ch;
				// cout << ch;
				if(ch=='.'){
					if(count>max){
						max = count;
					}
					count = 0;
				}
				if(ch=='#'){
						count++;
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}	