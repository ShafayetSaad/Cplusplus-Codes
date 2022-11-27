#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int, int>> &v){
	cout << "Size: " << v.size() << endl;
	for(int i=0;i<v.size();i++){
		cout << v[i].first << " " << v[i].second << endl;
	}
	cout << endl;
}

void printVector1(vector<int> &v){
	cout << "Size: " << v.size() << endl;
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	// vector<pair<int, int>> v = {{1, 1}, {2, 4}, {3, 9}};
	vector<pair<int, int>> v;
	printVector(v);
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int x, y;
		cin >> x >> y;
		// v.push_back({x, y});
		v.push_back(make_pair(x, y));
	}
	printVector(v);

	int N;
	cin >> N;
	vector<int> v_array[N]; // Array of vectors
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		for(int j=0;j<a;j++){
			int b;
			cin >> b;
			v_array[i].push_back(b);
		}
	}
	for(int i=0;i<N;i++){
		printVector1(v_array[i]);
	}

	cout << endl;

	vector<vector<int>> vv;// Vector of vector
	N = 3;
	for(int i=0;i<N; i++){
		cin >> n;
		// This are the two ways
		vector<int> temp; // Number 1
		// vv.push_back(vector<int> ()); // Number 2
		for(int j=0;j<n;j++){
			int x;
			cin >> x;
			temp.push_back(x);
			// vv[i].push_back(x);
		}
		vv.push_back(temp);

	}
	for(int i=0;i<vv.size();i++){
		printVector1(vv[i]);
	}
	cout << endl;
	vv.push_back(vector<int> ());
	for(int i=0;i<vv.size();i++){
		printVector1(vv[i]);
	}
	cout << vv[0][1] << endl;
	return 0;
}	