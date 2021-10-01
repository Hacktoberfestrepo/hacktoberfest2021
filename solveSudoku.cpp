#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<vector<char>> board,int po,int i,int j){
    char c='0'+po;
    for(int m=0;m<board.size();m++){
        if(board[i][m]==(c))
            return false;
    }
    for(int m=0;m<board.size();m++){
        if(board[m][j]==(c))
            return false;
    }
    int sub_i=3*(i/3);
    int sub_j=3*(j/3);
    for(int m=0;m<3;m++){
        for(int n=0;n<3;n++){
            if(board[sub_i+m][sub_j+n]==(c))
                return false;
        }
    }
    return true;
}
bool solve (vector<vector<char>> &board,int i,int j){
    int ni,nj;
    if(i==board.size()){

        return true;
    }
    if(j==(board[0].size()-1)){
        ni=i+1;nj=0;
    }
    else{
        nj=j+1;ni=i;
    }

    if(board[i][j]=='0'){
        for(int po=1;po<=9;po++){
            if(isValid(board,po,i,j)){
                     char c='0'+po;
                board[i][j]=c;
                if(solve(board,ni,nj))
                    return true;
                board[i][j]='0';
            }
        }
    }
    else
    {
        if(solve(board,ni,nj))
                    return true;
    }
    return false;
}
int main() {
       vector<vector<char>>board(9,vector<char>(9,'0'));
       cout<<"Enter the 9*9 sudoku :\n\n";
   for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
        }
    }
    int ni=0,nj=0;//ni=next i,nj=next j
    solve(board,ni,nj);

    cout<<"\n\n\nThe solved sudoku is : \n\n\n";
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    }
