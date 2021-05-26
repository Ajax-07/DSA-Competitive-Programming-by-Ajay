
#include<bits/stdc++.h>
using namespace std;
int board[11][11];
bool isPossible(int n, int row, int col){
    // for upper column
    for(int i=row-1; i>=0; i--){
        if(board[i][col]==1)
            return false;
    }

    // for upper left diagonal
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j-- ){
        if(board[i][j]==1 )
             return false;
    }

    // for upper right diagonal
    for(int i=row-1, j=col+1; i>=0, j<n; i--, j++){
        if(board[i][j] == 1)
          return false;
    }

    return true;
}

void placeQueen(int n, int row){
    if(row == n){
        // print answer and return
        for(int i=0; i<n; i++){
             for(int j=0; j<n; j++)
               cout << board[i][j] << " ";
        }

        cout << endl;

       return ;     
    }

    for(int j=0; j<n; j++){
        if(isPossible(n,row,j)){
            board[row][j] = 1;
            placeQueen(n, row+1);
            board[row][j]=0;
        }
    }

    return;

}
void placeQueen(int n){
    memset(board, 0, 11*11*sizeof(int)); 
    placeQueen(n, 0);
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    placeQueen(n);
}