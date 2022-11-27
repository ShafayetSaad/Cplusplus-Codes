#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	auto start = high_resolution_clock::now();
	long long int count = 0;
	for(int i=0;i<1e8;i++){
		count++;
	}
	cout << count << endl;

	vector<int> v = {1, 2, 3, 4, 5, 6};
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;

	// vector<int> ::iterator it = v.begin();
	// for(it = v.begin(); it != v.end(); it++){
	// 	cout << *it << " ";
	// }
	// cout << endl;

	for(int value : v){ // here value makes a copy
		cout << value << " ";
	}
	cout << endl;

	for(int &value : v){ // here value is pass by reference
		cout << value << " ";
	}
	cout << endl;

	vector<pair<int, int>> v_p = {{1, 1}, {2, 4}, {3, 9}};
	for(pair<int, int> &value : v_p){
		cout << value.first << " " << value.second << endl;
	}

	auto a = 1.0;
	auto b = 1;
	cout << sizeof(a) << endl; // float
	cout << sizeof(b) << endl; // int

	// does't need to define iterator using auto
	// It is better to write with auto
	for(auto it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	// This is the best way
	for(auto &value : v_p){
		cout << value.first << " " << value.second << endl;
	}

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken: "<< duration.count()*1e-6 << " microseconds" << endl;
	cout << 1e-3 << endl;
	return 0;
}	