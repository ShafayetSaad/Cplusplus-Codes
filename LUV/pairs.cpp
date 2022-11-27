#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	pair<int, string> p;

	// p = make_pair(2, "abc");
	p = {4, "abcd"};
	
	cout << p.first << " " << p.second << endl;

	int a[] = {1, 2, 3};
	int b[] = {1, 4, 9};
	pair<int, int> p_array[3];
	p_array[0] = {1, 1};
	p_array[1] = {2, 4};
	p_array[2] = {3, 9};
	for(int i=0;i<3;i++){
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}
	swap(p_array[0], p_array[2]);
	cout << "After swap:" << endl;
	for(int i=0;i<3;i++){
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}
	cin >> p.first;
	cout << p.first << endl;
	return 0;
}	