#include <iostream>
#include <vector>
using namespace std;

// 0, 1, 1, 2, 1, 3, 2, 3, 1, 4
// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

int fusc(long long int n){
	long long int a, b;
	a = 1;
	b = 0;
	while(n>0){
		if(n%2==1){
			b = a+b;
			n = (n-1)/2;
		}
		else{
			a = a+b;
			n = n/2;
		}
	}
	return b;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	long long int n;
	cin >> n;

	long long int max = 0;

	for(long long int i=0;i<n;i++){
		long long int number = fusc(i);
		// cout << number << endl;
		if(number>max){
			max = number;
		}
	}
	cout << max << endl;
	

	return 0;
}
