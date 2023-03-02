#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n]{0};
		int temp[n-1];
		arr[0] = 1;
		for(int i=0; i<n-1; i++){
			cin >> temp[i];
		}
		for(int i=0; i<n; i++) arr[i]=1;

		for(int i=n-2; i>=0; i--){
			for(int i=0; i<n; i++) cout << arr[i] << " ";
			cout << endl << endl;
            if (temp[i] == 0) arr[i] = arr[i + 1];

            else if(temp[i] == 1){
                arr[i] = 1;
                if(arr[i+1] == 1){
                    int x = i+1;
                    arr[x] += 1;
                    while(x < n-1) {
                        if(temp[x] == 0){
                            arr[x + 1] += 1;
                        }
                        else if(temp[x]==1 && arr[x+1]<=arr[x]){
                            arr[x+1] += 1;
                        } 
                        else{ break; }
                        x += 1;
                    }
                }
            } 
            else{
                arr[i] = arr[i + 1] + 1;
            }
        }

		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
		}cout << endl;
	}
	return 0;
}	