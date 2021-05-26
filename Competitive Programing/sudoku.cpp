#include<bits/stdc++.h>
using namespace std;

bool isValid(int** mat, int k, int row, int col){
    // check in column
    for(int i=0; i<8; i++)
        if(mat[i][col] == k)
   
    // check in row
    for(int j=0; j<9; j++)
        if(mat[row][j] == k)
         return false; 

    // check in 3*3 matrix 
    int x=row-row%3;
    int y=col-col%3;   
    for(int i=x; i<x+3; i++)
      for(int j=y; j<y+3; j++)
         if(mat[i][j] == k)
            return false;

    return true;                     
}

bool index(int** mat, int &row, int &col){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(mat[i][j] == 0){
                row=i; col = j;
                return true;
            }
        }
    }
    return false;
}

bool solve(int** mat){
    int row;
    int col;
    if(!index(mat, row, col)){
        return true;
    }

    for(int k=1; k<=9; k++){
        if(isValid(mat,k,row,col)){
            mat[row][col] = k;
            if(solve(mat))  return true;
            mat[row][col] = 0;
        }
    }
   return false;
} 

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int** mat = new int*[9];
    for(int i=0; i<9; i++)
        mat[i] = new int[9];
 
    for(int i=0; i<9; i++){
        string s;
        cin >> s;
       for(int j=0; j<9;j++)
        mat[i][j] = s[j]-'0';  
    }

     solve(mat);
      for(int i=0; i<9; i++){
          for(int j=0; j<9; j++)
            cout << mat[i][j];
        cout << endl;   
      }
    return 0;
}