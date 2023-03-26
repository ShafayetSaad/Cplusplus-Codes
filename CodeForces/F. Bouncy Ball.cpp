#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	int m, n, i1, j1, i2, j2, ct, x;
	string d;
	while(t--){
		cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;
		ct = 0;
		bool flag = false;
		int N = 70000;
		if(max(n, m) < 100) N = 10000;
		for(int i=0; i<N; i++){
			// cout << i1 << " " << j1 << endl;

			if(i1==i2 && j1==j2){
				cout << ct << endl;
				flag = true;
				break;
			}

			if(j1==m){
				if(i1==1){
					if(d!="DL"){
						d="DL";
						ct++;
					}
				}
				else if(i1==n){
					if(d!="UL"){
						d="UL";
						ct++;
					}
				}
				else if(d=="DR"){
					d="DL";
					ct++;
				}
				else if(d=="UR"){
					d="UL";
					ct++;
				}
			}
			else if(j1==1){
				if(i1==1){
					if(d!="DR"){
						d="DR";
						ct++;
					}
				}
				else if(i1==n){
					if(d!="UR"){
						d="UR";
						ct++;
					}
				}
				else if(d=="UL"){
					d="UR";
					ct++;
				}
				else if(d=="DL"){
					d="DR";
					ct++;
				}
			}
			else{
				if(i1==n){
					if(d=="DR"){
						d="UR";
						ct++;
					}
					else if(d=="DL"){
						d="UL";
						ct++;
					}
				}
				else if(i1==1){
					if(d=="UR"){
						d="DR";
						ct++;

					}
					else if(d=="UL"){
						d="DL";
						ct++;
					}
				}
			}

			if(d=="DL"){
				x = abs(j1-j2);
				if((i1+x)==i2 && (j1-x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = abs(i1-i2);
				if((i1+x)==i2 && (j1-x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = min(j1-1, n-i1);
				if(x<1) x=1;
				i1+=x;
				j1-=x;
			}
			else if(d=="DR"){
				x = abs(j1-j2);
				if((i1+x)==i2 && (j1+x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = abs(i1-i2);
				if((i1+x)==i2 && (j1+x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = min(m-j1, n-i1);
				if(x<1) x=1;
				i1+=x;
				j1+=x;
			}
			else if(d=="UL"){
				x = abs(j1-j2);
				if((i1-x)==i2 && (j1-x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = abs(i1-i2);
				if((i1-x)==i2 && (j1-x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = min(j1-1, i1-1);
				if(x<1) x=1;
				i1-=x;
				j1-=x;
			}
			else if(d=="UR"){
				x = abs(j1-j2);
				if((i1-x)==i2 && (j1+x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = abs(i1-i2);
				if((i1-x)==i2 && (j1+x)==j2){
					cout << ct << endl;
					flag = true;
					break;
				}
				x = min(m-j1, i1-1);
				if(x<1) x=1;
				i1-=x;
				j1+=x;
			}
		}
		if(!flag) cout << -1 << endl;
	}
	return 0;
}	
