#include <bits/stdc++.h>
using namespace std;

/*
(index)
        10(0)
     5(1)   8(2)
   2(3) 3(4)  6(5)  

left(i) = 2i+1
right(i) = 2i+2
parent(i) = (i-1)/2

*/


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	vector<int> v={15, 6, 7, 12, 30};
	// make_heap(v.begin(), v.end());
	// cout << v.front() << endl;
	make_heap(v.begin(), v.end(), greater<int>());
	for(auto x : v){
 		cout << x << " ";
 	}cout << endl;
	cout << v.front() << endl;

	// 6 is moved to last
	pop_heap(v.begin(), v.end(), greater<int>());
	cout << v.front() << endl;
 	v[4] = 2;
 	// 2 is moved to first
 	push_heap(v.begin(), v.end(), greater<int>());
 	cout << v.front() << endl;

 	sort_heap(v.begin(), v.end(), greater<int>());
 	for(auto x : v){
 		cout << x << " ";
 	}cout << endl;
	return 0;
}	