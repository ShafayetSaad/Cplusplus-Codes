#include <iostream>
#include <cmath>
using namespace std;


int decimal2Binary(int n){
	int binary = 0;
	int remainder = 0;
	int count = 0;
	int mlt = 1;
	while(n>0){
		remainder = n%2;

		//cout <<  (binary + remainder*pow(10, count)) << endl;
		binary = binary + remainder*mlt ;
		cout << "binary after: " << binary << endl;
		
		n = n/2;
		count++;
		mlt = mlt*10;
	}
	cout << binary;
	return 0;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	decimal2Binary(n);
	return 0;
}	