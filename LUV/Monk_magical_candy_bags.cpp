#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		multiset<long long> st;
		for(int i=0;i<n;i++){
			long long x;
			cin >> x;
			st.insert(x);
		}
		long long count = 0;
		for(int i=0;i<k;i++){
			long long candy;

			// auto it = st.end();
			// it--;
			auto it = (--st.end());
			
			candy = *it;
			count += candy;
			st.erase(it);
			st.insert(candy/2);
		}
		cout << count << endl;
	}
	return 0;
}	