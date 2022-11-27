#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	int min = *min_element(v.begin(), v.end());
	// cout << min << endl;

	int max = *max_element(v.begin(), v.end());
	// cout << max << endl;

	int sum = accumulate(v.begin(), v.end(), 0);
	// cout << sum << endl;

	int ct = count(v.begin(), v.end(), 6);
	cout << ct << endl;

	auto it = find(v.begin(), v.end(), 8);
	if(it != v.end()){
		cout << *it << endl;
	}else{
		cout << "Not found" << endl;
	}

	reverse(v.begin(), v.end());
	for(auto val : v){
		cout << val << " ";
	}
	cout << endl;

	string s = "abcdefgh";
	reverse(s.begin(), s.end());
	cout << s << endl;


	cout << "Lambda" << endl;
	cout << [](int x, int y){return x+y;}(3, 5) << endl;
	auto sum_num = [](int x, int y){return x+y;};
	cout << sum_num(2, 3) << endl;

	return 0;
}	