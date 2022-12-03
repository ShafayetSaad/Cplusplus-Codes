#include <bits/stdc++.h>
using namespace std;

int count_distinct(int arr[], int n){
	int count = 0;
	bool isDistinct = true;

	for(int i=0;i<n;i++){
		isDistinct = true;

		for(int j=i-1;j>=0;j--){
			if(arr[i] == arr[j]){
				isDistinct = false;
				break;
			}
		}

		if(isDistinct) count++;
	}
	return count;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {10, 20, 10, 20, 30};
	set<int> st;
	for(int i=0;i<5;i++){
		st.insert(arr[i]);
	}
	cout << st.size() << endl;
	cout << count_distinct(arr, 5);
    return 0;
}