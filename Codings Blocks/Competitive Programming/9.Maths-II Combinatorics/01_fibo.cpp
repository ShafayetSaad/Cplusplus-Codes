/*
Fibonacci series
f(n) = f(n-1) + f(n-2)

Q: Find the number of boolean strings of length N, with no consecutive
one's.
Q: Find the number of ways to build a wall of size Z*N, with bricks of
size 1*2 and 2*1.
Q: How many ways can a boy climb up Nth stairs.

How to Compute
- Recursion -> 2^n
- Top-Down DP -> O(N)
- Bottom-Up DP -> O(N)
- DP with Space Optimization (Three Variables) -> O(N)
- Matrix Exponentiation -> O(log(N))
- Binet's Formula -> Approximation (phi^n - (-phi)^(-n))/sqrt(5) -> O(1)
- Codeforces Hack -> O(log(N))  "codeforces.com/blog/entry/14516"

Interesting Properties

Zeckenforf's Theorem: Each positive number can be written in a unique way
as sum of one or more fibonacci numbers such that some doesn't include any
two consecutive numbers.
100 = 89 + 8 + 3
77 = 55 + 21 + 1
17 = 13 + 3 + 1

Pisano Period:
Last 1/2/3/4 digit(s) of fibonacci number repeat with period of 
60/300/1500/1500 respectively.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	