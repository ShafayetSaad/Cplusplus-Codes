#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
	int lcm;
	if(a>b){
		lcm=a;
	}
	else{
		lcm=b;
	}
	while(1) {
      if( lcm%a==0 && lcm%b==0 ) {
         return lcm;
      }
      lcm++;
   }
   return lcm;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b, c, end;
	cin >> a >> b >> c;
	int count = 0;
	end = 1;
	while(count<c){
		end++;
		if(end%a==0 || end%b==0){
			count++;
		}
	}
	int step;
	if(end%a==0 && end%b==0){
		step = lcm(a, b);
	}
	else if(end%a==0){
		step = a;
	}
	else{
		step = b;
	}
	for(int i=end;i>=0;i-=step){
		cout << i << " ";
	}
	return 0;
}	