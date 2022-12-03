#include <iostream>
using namespace std;

int staircase(int arr[][4],int n, int m, int num){
	int a = 0;
	// cout << "Hola " << endl;
	int i=0;
	int j=m-1;
	while(i<n){
		while(j>=0){
			a++;
			if(arr[i][j]==num){
				cout << "index is: " << i << " " << j << endl;
				cout << "hola: " << a << endl;
				return 0;
			}
			else if(arr[i][j] < num){
				i++;
			}
			else if(arr[i][j] > num){
				j--;
			}
		
		}
	}
	cout << "Sorry: " << a << endl;
	return 0;
}

int linearSearch(int arr[][4], int n, int m, int num){
	int a = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a++;
			if(arr[i][j]==num){
				cout << "Got it " << i << " " << j << endl;
				cout << "a is " << a << endl;
				return 0;
			}
		}
	}
	cout << "Sorry " << a << endl;
	return 0;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	n = 4, m = 4;
	int arr[][4] = {{10, 20, 30, 40},
					{15, 25, 35, 45},
					{27, 29, 37, 48},
					{32, 33, 39, 50}};
	/*
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
*/
	int num = 27;
	linearSearch(arr, 4, 4, num);
	cout << "********Stair*******" << endl;
	staircase(arr,4, 4, num);
	
	return 0;
}	

