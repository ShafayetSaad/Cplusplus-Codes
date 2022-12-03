#include <iostream>
using namespace std;

int factorial(int n){
	int factorial = 1;
	for(int i=2;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << "Holaa" << endl;
	// for(int i=n;i>=1;i--){
	// 	for(int j=1;j<=i;j++){
	// 		cout << j << " ";
	// 	}
	// 	cout << endl;
	// }

	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=i;j++){

	// 		// Logic 01
	// 		// if(j%2==0 && i%2==0){
	// 		// 	cout << 1 << ' ';
	// 		// }
	// 		// else if(j%2==1 && i%2==1){
	// 		// 	cout << 1 << ' ';
	// 		// }
	// 		// else{
	// 		// 	cout << 0 << ' ';
	// 		// }

	// 		// Logic 02
	// 		if((i+j)%2==0){
	// 			cout << 1 << ' ';
	// 		}
	// 		else{
	// 			cout << 0 << ' ';
	// 		}
	// 	}
	// 	cout << endl;
	// }


	// for(int i=n;i>0;i--){
	// 	for(int j=1;j<i;j++){ cout << " ";}
	// 	for(int j=1;j<=n;j++){ cout << "* ";}
	// 	cout << endl;
	// }


	// Logic 1
	int count = 1;
	for(int i=n;i>0;i--){
		for(int j=1;j<i;j++){
			cout << " ";
		}

		for(int k=1;k<=count;k++){
			cout << k << " ";
			
		}
		cout << endl;
		count++;
	}
	cout << endl << endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout << " ";
		}
		for(int j=1;j<=i;j++){
			cout << j << " ";
		}
		cout << endl;
	}

	cout << endl << endl << endl;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout << "  ";
		}
		for(int k=i;k>0;k--){
			cout << k << " ";
		}
		for(int k=2;k<=i;k++){
			cout << k << " ";
		}
		cout << endl;
	}
	cout << endl << endl << endl;



	n=5;
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++){
			cout << "  ";
		}
		for(int k=0;k<2*i+1;k++){
			cout << "* ";
		}
		cout << endl;
				
	}
	for(int i=0;i<n;i++){
		for(int j=i;j>0;j--){
			cout << "  ";
		}
		for(int k=2*n-1-i*2;k>0;k--){
			cout << "* ";
		}
		cout << endl;			
	}

	cout << endl << endl << endl;

	n=9;
	for(int i=1;i<=n/3;i++){
		for(int j=1;j<=n;j++){
			if((i+j)%4==0){
				cout << "* ";
			}
			else if(i==2 && j%4==0){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl << endl << endl;

	int febo_1 = 0;
	int febo_2 = 1;
	n=10;
	cout << febo_1 << " ";
	for(int i=0;i<=n;i++){
		cout << febo_2 << " ";
		int temp = febo_1;
		febo_1 =febo_2;
		febo_2 = temp + febo_2;
	}

	cout << endl << endl << endl;

	n = 4;
	int fact = 1;
	for(int i=1;i<=n;i++){
		fact = fact*i;
	}
	cout << fact << endl;

	cout << endl << endl << endl;

	n = 5;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==1 || j==i){
				cout << "1 ";
			}
			else{
				cout << i+j-3 << " ";
			}
			
		}
		cout << endl;
	}

	cout << endl << endl << endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout << factorial(i)/(factorial(j)*factorial(i-j)) << " ";
		}
		cout << endl;
	}


	return 0;
}	