#include <bits/stdc++.h>
using namespace std;

struct Point{
	int x, y;
};

bool myCmp(Point p1, Point p2){
	return (p1.x < p2.x);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// Time Complexity: big O(nlogn)
	// Uses IntroSort(hybrid of quicksort, heapsort and insetion sort)
	int arr[] = {10, 20, 5, 7};
	sort(arr, arr+4);
	for(auto x : arr){
		cout << x << " ";
	}cout << endl;

	sort(arr, arr+4, greater<int>());
	for(auto x : arr){
		cout << x << " ";
	}cout << endl;	

	Point p[] = {{3, 10}, {2, 8}, {5, 4}};
	sort(p, p+3, myCmp);
	for(auto i : p){
		cout << i.x << " " << i.y << endl;
	}

	cout << endl << "Hola" << endl << endl;
	// vector<pair<int, int>> vp = {{3, 10}, {2, 8}, {5, 4}};
	vector<pair<int, int>> vp;
	for(int i=0;i<58;i++){
		int x;
		cin >> x;
		vp.push_back({x, 0});
	}
	for(int i=0;i<58;i++){
		int x;
		cin >> x;
		vp[i].second = x;
	}
	sort(vp.begin(), vp.end(), [](pair<int, int> x, pair<int, int> y){return (x.first > y.first);});
	for(auto i : vp){
		cout << i.first << " " << i.second << endl;
	}

	return 0;
}	