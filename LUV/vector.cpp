#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
	cout << "Size: " << v.size() << endl;
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
		cout << v.at(i) << " ";
	}
	cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[10];
	vector<int> v;
	vector<pair<int, int>> vp;
	vp.push_back({500, 2});
	cout << vp[0].first << endl;

	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	printVector(v);

	std::vector<int> v1(7, 1);
	printVector(v1);
	v1.push_back(9);
	printVector(v1);
	v1.pop_back();
	printVector(v1);

	// vector<int> v_copy = v1; // O(n) time complexity
	// printVector(v_copy);

	printVector(v);
	vector<int> &v2 = v; // by reference
	v2.push_back(77);
	printVector(v);
	return 0;
}	