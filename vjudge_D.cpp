#include <iostream>
#include <string>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	if(n==0){
		cout << 6 << endl;
		cout <<"Time\n"<<"Mind\n"<<"Soul\n"<<"Power\n"<<"Reality\n"<<"Space\n";
	}
	else{
		string gaunlet[6] = {"green", "yellow", "orange", "purple", "red", "blue"};
		// string gaunlet[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
		
		string arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}

		cout << 6-n << endl;
		bool found;
		for(int i=0;i<6;i++){
			found = false;
			for(int j=0;j<n;j++){

				if(gaunlet[i]==arr[j]){
					found = true;
				};
			}

			string name = gaunlet[i];
			if(!found){
				if(name=="red"){
					cout << "Reality" << endl;
				}
				else if(name=="purple"){
					cout << "Power" << endl;
				}
				else if(name=="green"){
					cout << "Time" << endl;
				}
				else if(name=="blue"){
					cout << "Space" << endl;
				}
				else if(name=="orange"){
					cout << "Soul" << endl;
				}
				else if(name=="yellow"){
					cout << "Mind" << endl;
				}
				else{
					cout << "Sorry" << endl;
				}





			}
		}
	}

	
	return 0;
}	