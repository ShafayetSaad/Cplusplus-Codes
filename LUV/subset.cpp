#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums){
	int n = nums.size();
	int subset_ct = (1<<n);
	vector<vector<int>> subs;
	for(int mask=0; mask<subset_ct; mask++){
		vector<int> sb;
		for(int i=0; i<n; i++){
			if((mask & (1<<i)) != 0){
				sb.push_back(nums[i]);
			}
		}
		subs.push_back(sb);
	}
	return subs;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	auto subs = subsets(v);
	for(auto subset : subs){
		for(int element : subset){
			cout << element << " ";
		}
		cout << endl;
	}

	return 0;
}	