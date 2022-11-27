#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
	long long int num=n;
	while(n>1){
		//cout<<n<<endl;
		num = num*(n-1);
		n--;
	}
	return num;
}

int ncr(int n, int r){
	//This is using factorial function
	int ans = fact(n)/(fact(n-r)*fact(r));
	cout << ans << endl;

	//This is using completely new code
	int up = n;
	int low = r;
	while(n>1 && r>1){
		up = up*(n-1);
		low = low*(r-1);
		n--;
		r--;
	}
	// cout << up << endl;
	// cout << low << endl;
	return up/low;
}

void isPrime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			cout << "The number is not a prime" << endl;
			break;
		}
	}
	if(i==n){
		cout << "The number is a prime" << endl;
	}
}

int binary2Decimal(long int n){
	long int decimal = 0;
	int remainder = 0;
	int count = 0;
	while(n>0){
		//cout << n;
		remainder = n%10;
		decimal = decimal+remainder*pow(2, count);
		n = n/10;
		count++;
	}
	cout << decimal;
	return 0;
}
int decimal2Binary(int n){
	int binary = 0;
	int remainder = 0;
	int count = 0;
	int num = 1;
	while(n>0){
		//cout << n;
		remainder = n%2;		
		binary = (binary + remainder*num);
		
		n = n/2;
		count++;
		num*=10;
	}
	cout << binary;
	return 0;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long int n;
	cin >> n;
	
	/*
	for(int i=n;i>0;i--){
		char letters = 65;
		for(int j=i;j>0;j--){
			cout << letters;
			letters++;
		}
		for(int j=i;j>0;j--){
			letters--;
			cout << letters;
		}
		cout << endl;
	}
	
	int num = 0;
	for(int i=0;i<n;i++){
		for(int j=n-i-1;j>0;j--){
			cout << " ";
		}
		for(int count=0;count<=i;count++){
			num++;
			cout << num;

		}
		for(int j=0;j<=i-1;j++){
			num--;
			cout << num;
		}
		cout << endl;
	}*/
	// cout << "Factorial is: " << fact(n) << endl;
	//cout << "NCR is: " << ncr(6, 3) << endl;
	// isPrime(n);
	int m;
	cin >> m;
	binary2Decimal(n);
	cout << endl;
	decimal2Binary(m);

	cout << endl << "Adress: " << &n << endl;
	return 0;
}	