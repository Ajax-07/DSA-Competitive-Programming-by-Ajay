//  find minimum cost path to  reach m-1Xn-1 from  0X0 in mXn matrix index;

#include<bits/stdc++.h>
using namespace std;

// dynamic programing O(m*n)
int minCost3(int ** mat, int m, int n){
    int ans[m][n];
    ans[m-1][n-1] = mat[m-1][n-1];

    for(int i=n-2; i>=0; i--){
        ans[m-1][i] = ans[m-1][i+1] + mat[m-1][i];
    }

    
    for(int i=m-2; i>=0; i--){
        ans[i][n-1] = ans[i+1][n-1] + mat[i][n-1];
    }

    
    for(int i=m-2; i>=0; i--){
        for(int j=n-2; j>=0; j--){
            ans[i][j] = min(ans[i][j+1], min(ans[i+1][j] , ans[i+1][j+1]) ) + mat[i][j];
        }
    }

    return ans[0][0];
}

// memoization o(m*n)
int minCost2(int ** mat, int m, int n,int i, int j, int **ans){
     if(i == m-1 && j == n-1)
      return mat[i][j];

    if(i>=m || j>=n)
       return INT_MAX;  

    if(ans[i][j] != -1)
       return ans[i][j];

    int x = minCost2(mat,m,n,i,j+1,ans);
    int y = minCost2(mat,m,n,i+1,j,ans);
    int z = minCost2(mat,m,n,i+1,j+1,ans);

    ans[i][j] = min(x,min(y,z)) + mat[i][j];
    
    return min(x,min(y,z)) + mat[i][j];    
}
int minCost2(int ** mat, int m, int n){
    int** ans = new int*[m];
    for(int i=0; i<m; i++){
        ans[i] = new int[n];
        for(int j=0; j<n; j++)
           ans[i][j] = -1;
    }

    return minCost2(mat,m,n,0,0,ans);
}


// recursion O(3^n+m)
int minCost(int **mat, int m, int n, int i, int j){
    if(i == m-1 && j == n-1)
      return mat[i][j];

    if(i>=m || j>=n)
       return INT_MAX;  

    int x = minCost(mat,m,n,i,j+1);
    int y = minCost(mat,m,n,i+1,j);
    int z = minCost(mat,m,n,i+1,j+1);
    
    return min(x,min(y,z)) + mat[i][j];

}
int minCost(int **mat, int m, int n){
    return minCost(mat,m,n,0,0);
}

int main(){
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
    #endif 


    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        int m, n;
        cin >> m >> n; 

       int** mat = new int*[m];
       for(int i=0; i<m; i++){
           mat[i] = new int[n]; 
           for(int j=0; j<n; j++)
              cin >> mat[i][j];
       }

       cout << minCost(mat,m,n) << " ";   
       cout << minCost2(mat,m,n) << " ";   
       cout << minCost3(mat,m,n) << endl;   
      
      
    }

    return 0;
}