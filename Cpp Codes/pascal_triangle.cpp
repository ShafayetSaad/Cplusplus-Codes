#include <iostream>
using namespace std;

int binomialCoeff(int n, int k);

void printPascal(int n)
{
	for (int line = 0; line < n; line++)
	{
		for (int i = 0; i <= line; i++)
			cout << binomialCoeff(line, i) << " ";
		cout <<"\n";
	}
}

int binomialCoeff(int n, int k)
{
	int res = 1;
	if (k > n - k)
	k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}
	
	return res;
}

// Driver program
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		printPascal(n+1);
		cout << endl;
	}
	return 0;
}