#include <bits/stdc++.h>
using namespace std;

const int N= 1e2;
int a[N];

void merge(int l, int r, int mid){
	int l_sz = mid-l+1;
	int L[l_sz+1];
	int r_sz = r-mid;
	int R[r_sz+1];

	for(int i=0;i<l_sz;i++){
		L[i] = a[i+l];
	}

	for(int i=0;i<r_sz;i++){
		R[i] = a[i+mid+1];
	}

	L[l_sz] = R[r_sz] = INT_MAX;

	int l_i = 0;
	int r_i = 0;
	for(int i=l; i<=r; i++){
		if(L[l_i] <= R[r_i]){
			a[i] = L[l_i];
			l_i++;
		}
		else{
			a[i] = R[r_i];
			r_i++;
		}
	}
}

void merge_sort(int l, int r){
	if(l>=r){
		return;
	}
	int mid = (l + r) / 2;
	merge_sort(l, mid);
	merge_sort(mid+1, r);
	merge(l, r, mid);
}




// void selection_sort(int arr[], int n){
// 	for(int i=0;i<n-1;i++){
// 		int min_index = i;

// 		for(int j=i+1;j<n;j++){
// 			if(arr[j]<arr[min_index]){
// 				min_index = j;
// 			}
// 		}

// 		if(i==min_index) continue;
// 		swap(arr[i], arr[min_index]);
// 	}
// } // Time complexity O(N^2)




int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;

	merge_sort(0, n-1);

	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Holaa";
	return 0;
}	