#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int bug_1=1, bug_2=2;
	for(int i=0;i<n;i++){
		int pay;
		cin >> pay;

		// This is the logic
		// bug_2 = pay/3;
		// if(pay%3==0){
		// 	bug_1 = pay/3;
		// }
		// else{
		// 	bug_1 = pay/3 + 1;
		// }
		// while((bug_1+bug_2*2)!=pay){
		// 	bug_2--;
		// 	bug_1 ++;
		// }

		// Another logic
		if(pay%3==0){
			cout << pay/3 << ' ' << pay/3;
		}
		else if(pay%3==1){
			cout << pay/3+1 << ' ' << pay/3;
		}
		if(pay%3==2){
			cout << pay/3 << ' ' << pay/3+1;
		}

		cout << endl;
		// cout << bug_1 << ' ' << bug_2 << endl;

	}
	return 0;
}	