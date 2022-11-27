#include <iostream>
#include <climits>
using namespace std;

int main()
{
	/*
	int n;
	cin >> n;
	for(int i = n; i>=1; i--){
		for(int j=i;j>=1;j--){
			cout << "* ";
		}
		cout << endl;
	}
	

	
	
	int n;
	cin>>n;
	int p = 1;
	for(int i= n; i>= 1; i--){
		for(int j = 1; j <= i-1; j++){
			cout << "  ";
		}
		for(int k = 1; k <= p; k++){
			cout << "* ";
		}
		p = p + 1;
		
		cout << endl;
	}
	

	// This is an alternative version.
	
	//int n ;
	cin >> n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<= n; j++){
			if(j <= n-i){
				cout << "  ";
			}else{
				cout << "* ";
			}
		}
		 cout << endl;
	}
	
	int array[5];
	for(int i=0; i<5; i++){
		cin >> array[i];
	}
	
	for(int i=0;i<=4;i++){
		if(array[i]==42){
			break;
		}
		else{
			cout << array[i] << endl;
		}
	}
	*/

	/*
	int array[5];
	for(int i=0;i<=4;i++){
		cin >> array[i];
	}

	//int max=array[0], min=array[0];
	int maxNum=INT_MIN, minNum=INT_MAX;

	for(int i=0; i<= 4; i++){
		/*
		if(array[i] < min){
			min = array[i];
		}
		else if(array[i] > max){
			max = array[i];
		}*//*

		maxNum=max(maxNum, array[i]);
		minNum=min(minNum,array[i]);

	}	

	cout << "Max " << maxNum << endl;
	cout << "Min " << minNum << endl;
	*/

	/*
	int row, col;
	cin >> row >> col;
	for(int i=1; i<= row; i++){
		for(int j=1; j<= col; j++){
			if(i==1||i==row){
				cout << "* ";
			}
			else if(j==1||j==col){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}

	int n;
	int num = 1;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j= 1;j<=i;j++){
			cout << num << " ";
			num += 1;
			//num ++;
		}
		cout << endl;
	}
	

	int n;
	cin >> n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout << j << " ";
		}
		cout << endl;
	}

	//int n;
	cin >> n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			int var = i+j;
			if(var%2==0){
				cout << 1 << " ";
			}
			else{
				cout << 0 << " ";
			}
			
		}
		cout << endl;
	}

	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			int var = i+j;
			if(var%2==0){
				cout << 1 << " ";
			}
			else{
				cout << 0 << " ";
			}
			
		}
		cout << endl;
	}
	

	int n;
	cin >> n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout << " ";
		}
		for(int j=1;j<=n;j++){
			cout << "* ";
		}
		cout << endl;
	}
	

	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout << " ";
		}
		int count = 1;
		for(int j=1;j<=i;j++){
			cout << count << " ";
			count ++;
		}
		cout << endl;
	}
	*/

	

	return 0;
}