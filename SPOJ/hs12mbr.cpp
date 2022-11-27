#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int left_x, left_y, right_x, right_y;
        for(int j=0;j<n;j++){
            char ch;
            cin >> ch;

            if(ch=='p'){
                int x, y;
                cin >> x >> y;
                if(j==0){
                    left_x = x;
                    left_y = y;
                    right_x = x;
                    right_y = y;
                }
                else{
                    if(left_x>x){ left_x = x;}
                    if(left_y>y){ left_y = y;}
                    if(right_x<x){ right_x = x;}
                    if(right_y<y){ right_y = y;}
                }
            }
            if(ch=='c'){
                int x, y, r;
                cin >> x >> y >> r;
                if(j==0){
                    left_x = x-r;
                    left_y = y-r;
                    right_x = x+r;
                    right_y = y+r;
                }
                else{
                    if(left_x>x-r){ left_x = x-r;}
                    if(left_y>y-r){ left_y = y-r;}
                    if(right_x<x+r){ right_x = x+r;}
                    if(right_y<y+r){ right_y = y+r;}
                }


            }
            // The problem is here
            if(ch=='l'){
                int x1, y1, x2, y2;
                cin >> x1 >> y1 >> x2 >> y2;
                if(j==0){
                    if(x1==x1){left_x = x1, right_x = x2;}
                    else if(y1==y2){left_y = y1, right_y = y2;}

                    if(x1<x2){left_x = x1, right_x = x2;}
                    else{left_x = x2, right_x = x1;}

                    if(y1<y2){;left_y = y1, right_y = y2;}
                    else{left_y = y2, right_y = y1;}

                }
                else{
                    if(left_x>x1){ left_x = x1;}
                    if(left_x>x2){ left_x = x2;}

                    if(left_y>y1){ left_y = y1;}
                    if(left_y>y2){ left_y = y2;}

                    if(right_x<x2){ right_x = x2;}
                    if(right_x<x1){ right_x = x1;}

                    if(right_y<y2){ right_y = y2;}
                    if(right_y<y1){ right_y = y1;}
                }
            }
        }
        cout << left_x << " " << left_y << " " << right_x << " " << right_y << endl;
    }
    return 0;
}
