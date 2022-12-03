#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	/*
	for(int i=0; i <= 100; i++){
		if(i%3==0){
			continue;
		}
		cout << i << endl;
	}
	

	int n;
	cin >> n;
	int reverse = 0;
	while(n>0){
		int lasrDigit = n%10;
		reverse = reverse*10 + lasrDigit;
		n = n/10;
	}
	cout << reverse << endl;
	*/

	int n;
	cin >> n;
	int sum=0;
	int originaln = n;
	while(n>0){
		int lastDigit = n%10;
		sum += pow(lastDigit, 3);
		n = n/10;
	}
	if(sum == originaln){
		cout << "Armstrong number" << endl;
	}
	else{
		cout << "Not Armstrong" << endl;
	}

	return 0;
}