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
		string jewel, stone;
		cin >> jewel >> stone;
		int count = 0;
		for(int i=0;i<stone.size();i++){
			for(int j=0;j<jewel.size();j++){
				if(stone[i]==jewel[j]){
					count++;
					break;
				}
			}
		}
		cout << count << endl;

	} 
	return 0;
}	