#include <iostream>
using namespace std;

//This is Selection Sort
void selection_sort(int arr[], int n){
	int index_min, temp;
	for(int i=0; i<n-1;i++){
		index_min = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[index_min]){
				index_min = j;
			}
		}
		if(index_min != i){
			temp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = temp;
		}
	}
}

void bubble_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void insertoin_sort(int arr[], int n){
	int item;
	for(int i=1;i<n;i++){
		item = arr[i];
		int j = i-1;
		while(j>= 0 && arr[j] > item){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = item;
	}
}


int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	//This is my first code for Selection Sort
	/*
	for(int i=0; i<n; i++){
		int base = i;
		int temp = 0;
		int min = arr[base];
		int end;
		for(int j=base+1;j<n;j++){
			if(arr[j] < min){
				min = arr[j];
			}
		}
		for(int i=0;i<n;i++){
			if(arr[i]==min){
				end = i;
				break;
			}
		}
		temp = arr[base];
		arr[base] = min;
		arr[end] = temp;
	}
	*/

	
	
	//selection_sort(arr, n);
	//bubble_sort(arr, n);
	insertoin_sort(arr, n);
	for(int i=0;i<n;i++){
		cout << arr[i] <<' ';
	}
	cout << endl;
	return 0;
}