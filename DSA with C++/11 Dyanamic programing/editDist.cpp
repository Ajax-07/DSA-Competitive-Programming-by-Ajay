// given two string find minimum operation to make both string same

#include<bits/stdc++.h>
using namespace std;


// dynamic programing
int minOperation3(string s, string t){
    int m = s.length();
    int n = t.length();

    int mat[m+1][n+1];
    mat[0][0]  = 0;
    for(int i=1; i<=m; i++)
         mat[i][0] = s.length();
    for(int j=1; j<=n; j++)
         mat[0][j] = t.length();
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s[m-i] == t[n-j])
               mat[i][j] = mat[i-1][j-1];
            else{
                int a = 1+mat[i-1][j];
                int b = 1+mat[i][j-1];
                int c = 1+mat[i-1][j-1];

                mat[i][j] = min(a,min(b,c));
            }   
        }
    }

    return mat[m][n];          
}

//memoization
int minOperation2(int **ans, string s, string t){
    
    if(s.size() == 0 || t.size() == 0)
       return max(s.size(),t.size());
     
     if(ans[s.length()][t.length()] != -1)
         return   ans[s.length()][t.length()];
     
     if(s[0] == t[0]){
          ans[s.length()][t.length()] = minOperation2(ans, s.substr(1),t.substr(1));
          return  ans[s.length()][t.length()];
     }
    else {
         int a = 1+minOperation2(ans, s.substr(1),t);    //insert
         int b = 1+minOperation2(ans, s ,t.substr(1));   // delete 
         int c = 1+minOperation2(ans, s.substr(1) ,t.substr(1));  // replace

         ans[s.length()][t.length()] = min(a,min(b,c));
         return min(a,min(b,c));   
    }   
   
}

int minOperation2(string s,string t){
    int **ans = new int*[s.length()+1];
    for(int i= 0; i<=s.length(); i++){
        ans[i] = new int[t.length()+1];
        for(int j=0; j<=t.length(); j++){
            ans[i][j] = -1;
        }
    }

    return minOperation2(ans, s, t);
}

// brute force
int minOperation(string s, string t){
    if(s.size() == 0 || t.size() == 0)
       return max(s.size(),t.size());
    
    if(s[0] == t[0])
        return minOperation(s.substr(1),t.substr(1));
    else {
         int a = 1+minOperation(s.substr(1),t);    //insert
         int b = 1+minOperation(s ,t.substr(1));   // delete 
         int c = 1+minOperation(s.substr(1) ,t.substr(1));  // replace
         return min(a,min(b,c));   
    }   
   
}

/*
abcd
zyexasud

6
6
6
*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    string s,t;
    cin >> s >> t;
    
    cout << minOperation(s,t) << endl;   // 6
    cout << minOperation2(s,t) << endl;   // 6
    cout << minOperation3(s,t) << endl;   // 6
   
    return 0;   
}