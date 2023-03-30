#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> &v, int element){
	int lo = 0, hi = v.size()-1;
	int mid;
	while(hi-lo > 1){
		mid = lo + (hi-lo)/2;
		if(v[mid] <= element) lo = mid+1;
		else hi = mid;
	}
	if(v[lo] > element) return lo;
	if(v[hi] > element) return hi;
	return -1;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	