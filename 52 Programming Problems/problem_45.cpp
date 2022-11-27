#include <iostream>
using namespace std;

long long binomialCoeff(long long n, long long k);

void printPascal(long long n)
{
	for (long long line = 0; line < n; line++)
	{
		for (long long i = 0; i <= line; i++)
			cout << binomialCoeff(line, i) << " ";
		cout <<"\n";
	}
}

long long binomialCoeff(long long n, long long k)
{
	long long res = 1;
	if (k > n - k)
	k = n - k;
	for (long long i = 0; i < k; ++i)
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
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		printPascal(n+1);
		cout << endl;
	}
	return 0;
}