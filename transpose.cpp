#include <bits/stdc++.h>
using namespace std;

void print(int arr[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
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
	
	int arr[3][3] = {{1, 2, 3}, 
						{4, 5, 6},
						{7, 8, 9}};
	print(arr);
	for(int i=0;i<3;i++){
		int j;
		for(j=i;j<3;j++){
			int temp = arr[j][i];
			arr[j][i] = arr[i][j];
			arr[i][j] = temp;
		}
	}
	cout << endl << endl;
	print(arr);
	return 0;
}