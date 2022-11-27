// I tried enough for this problem.

#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> cb;

int find(vector<int> v, int a){
	for(int i=0;i<v.size();i++){
		if(v[i]==a){
			return 1;
		}
	}
	return 0;
}

void print(){
	cout << "Holaa " << endl;
	for(int i=0;i<cb.size();i++){
		cout << "index " << i << ": ";
		for(int j=0;j<cb[i].size();j++){
			cout << cb[i][j] << " ";
		}
		cout << endl;
	}
}

int factorial(int n){
	if(n==1) return 1;
	return n*factorial(n-1);
}

int combination(vector<int> vr, int n){
	int total_com = factorial(n); // 6
	int same = total_com/n; // 2
	int index = 0;
	// First element done
	for(int i=0;i<total_com;i+=same){
		vector<int> v;
		for(int j=0;j<same;j++){
			v.push_back(vr[index]);
			cb.push_back(v);
			v.clear();
		}
		index++;
	}
	for(int i=1;i<n;i++){
		index = i;
		for(int j=0;j<total_com;j++){
			
			if(index >= n){
				index = 0;
			}
			
			if(cb[0].size() > 2 && j>=3){
				if(cb[j-3][index]==vr[index]){
					if(index==(n-1)){
						index = 0;
					}else{
						index++;
					}
				}

				if(find(cb[j], vr[index])){
				if(index==(n-1)){
					index = 0;
				}else{
					index++;
				}
			}
			}

			if(find(cb[j], vr[index])){
				if(index==(n-1)){
					index = 0;
				}else{
					index++;
				}
			}
			cb[j].push_back(vr[index]);
			index++;
		}
	}
	
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> vr = {1, 2, 3, 4};
	int n = 4;

	combination(vr, n);


	print();
	return 0;
}	


// index 0: 1 2 3 4 
// index 1: 1 3 4 2 
// index 2: 1 4 2 3 
// index 3: 1 2 3 4 
// index 4: 1 3 4 2 
// index 5: 1 4 2 3  


// C++ program to print all combination
// of size r in an array of size n
#include<bits/stdc++.h>
using namespace std;

void combinationUtil(int arr[], int data[],
					int start, int end,
					int index, int r);

// The main function that prints
// all combinations of size r
// in arr[] of size n. This function
// mainly uses combinationUtil()
void printCombination(int arr[], int n, int r)
{
	// A temporary array to store
	// all combination one by one
	int data[r];

	// Print all combination using
	// temporary array 'data[]'
	combinationUtil(arr, data, 0, n-1, 0, r);
}

/* arr[] ---> Input Array
data[] ---> Temporary array to
store current combination
start & end ---> Starting and
Ending indexes in arr[]
index ---> Current index in data[]
r ---> Size of a combination to be printed */
void combinationUtil(int arr[], int data[],
					int start, int end,
					int index, int r)
{
	// Current combination is ready
	// to be printed, print it
	if (index == r)
	{
		for (int j = 0; j < r; j++)
			cout << data[j] << " ";
		cout << endl;
		return;
	}

	// replace index with all possible
	// elements. The condition "end-i+1 >= r-index"
	// makes sure that including one element
	// at index will make a combination with
	// remaining elements at remaining positions
	for (int i = start; i <= end &&
		end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		combinationUtil(arr, data, i+1,
						end, index+1, r);
	}
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int r = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	printCombination(arr, n, r);
}

// This code is contributed by rathbhupendra
