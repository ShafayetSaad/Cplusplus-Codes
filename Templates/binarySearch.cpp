#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> vr, int element){
	int lo = 0, hi = vr.size()-1, mid;
	while(hi-lo > 1){
		mid = lo + (hi-lo)/2;
		if(vr[mid] < element) lo = mid+1;
		else hi = mid;
	}
	if(vr[lo] == element) return lo;
	else if(vr[hi] == element) return hi;
	else return -1;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	