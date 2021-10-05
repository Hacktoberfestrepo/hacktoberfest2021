//spiral easy intution with constraints top bottom left right
#include <bits/stdc++.h>
using namespace std;

/*
ip:
3 3
1 2 3
4 5 6
7 8 9
op:
1 2 3 6 9 8 7 4 5
*/

int main() {
//   int r,c;
//   cin>>r>>c;
//   int m[r][c];
   
//   for(int i=0; i<r; i++){
//       for(int j=0; j<c; j++){
//           cin>>m[i][j];
//       }
//   }
    
    vector<vector<int> > m{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
    int r = 4, c = 4;
    int left = 0, right = c -1, top = 0, bottom = r -1;
    int direction = 1;
    
    while( left <= right && top <= bottom){
        if(direction == 1){
            for(int i=left; i<= right; i++){
                cout<<m[top][i]<<" ";
            }
            top++;
            direction  = 2;
        }
        if(direction == 2){
            for(int i=top; i<=bottom; i++){
                cout<<m[i][right]<<" ";
            }
            right--;
            direction = 3;
        }
        
        if(direction == 3){
            for(int i = right; i>= left; i--){
                cout<<m[bottom][i]<<" ";
            }
            bottom--;
            direction = 4;
        }
        if(direction == 4){
            for(int i= bottom; i>= top; i--){
                cout<<m[i][left]<<" ";
            }
            left++;
            direction = 1;
        }
    }
    
}
