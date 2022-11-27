#include <bits/stdc++.h>
using namespace std;
const int n = 2;
void print(int arr[n][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int matA[n][n] = {{1, 2}, {3, 4}};
	int matB[n][n] = {{1, 2}, {3, 4}};
	int result[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int mult = 0;
			for(int k=0;k<n;k++){
				mult = mult + (matA[i][k]*matB[k][j]);
			}
			result[i][j] = mult;
		}
	}
	print(result);
	return 0;
}	