#include <iostream>
using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
	int prevSum = sum(n-1);
	return n+prevSum;
}

int power(int n, int p){
	if(p==0){
		return 1;
	}
	int prevPower = power(n, p-1);
	return n*prevPower;
}

int factorial(int n){
	if(n==0){
		return 1;
	}
	return n*factorial(n-1);
}

int fib(int n){
	if(n==0 || n==1){ return n;}

	return fib(n-1) + fib(n-2);
}


bool sorted(int arr[], int n){
	if(n==1){
		return true;
	}
	bool restArray = sorted(arr+1, n-1);

	return (arr[0] < arr[1] && restArray);
}

int firstocc(int arr[], int n, int i, int key){
	if(i==n){
		return -1;
	}
	if(arr[i]==key){
		return i;
	}
	return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key){
	if(i==n){
		return -1;
	}
	int restArray = lastocc(arr, n, i+1, key);
	if(restArray != -1){
		return restArray;
	}
	if(arr[i]==key){
		return i;
	}
	return -1;
}



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int count_5 = 0;
	int count_7 = 0;
	int count = 0;
	for(int i=1;i<=1000;i++){
		if(i%5==0){
			count_5++;
		}
		if(i%7==0){
			count_7++;
		}
		if(i%5==0 && i%7==0){
			count++;
		}
	}
	cout << count_7+count_5-count<<endl;

	count = 0;
	int count_both = 0;
	for(int i=1;i<=1000;i++){
		if(i%5==0 || i%7==0){
			count++;
		}
	}
	cout << count-count_both <<endl;

	cout << sum(50) << endl;
	// cout << power(3, 3) << endl;
	// cout << factorial(5) << endl;
	// cout << fib(5) << endl;
	// cout << fib(6) << endl;

	cout << "Hola" << endl;
	int arr[]={1, 2, 3, 4, 5};
	// cout << sorted(arr, 5) << endl;
	int arr_1[] = {4, 2, 1, 2, 5, 2, 7};
	cout << firstocc(arr, 7, 0, 2) << endl;
	cout << lastocc(arr, 7, 0, 2) << endl;
	return 0;
}	