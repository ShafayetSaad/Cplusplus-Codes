/*
What is the minimum number of people that should be present
in a hall so that there's 50% chance of two people having 
the same birthday?
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	float x = 1.0;
	// x denotes the probability of 2 people have same birthday
	int count = 0;
	float num = 365;
	float denominator = 365;
	
	float probability;
	cin >> probability;

	if(probability==1.0){
		cout << 366 << endl;
		return 0;
	}

	while(x > (1-probability)){
		// x is less than the threshold
		x = x*(num/denominator);
		num--;
		count++;
		// cout << "People " << count << " and x " << x << endl;
	}
	cout << count << endl;
	return 0;
}	