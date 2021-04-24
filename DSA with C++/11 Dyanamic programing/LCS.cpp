// given two string find longest common sub-sequence (LCS)

#include<bits/stdc++.h>
using namespace std;

// dynamic programing

int lcs3(string s, string t){
    int m = s.length();
    int n = t.length();
    
    int ans[m+1][n+1];

    for(int i=0; i<=m; i++){
      ans[i][0] = 0;
    }
     for(int j=1; j<=n; j++){
      ans[0][j] = 0;
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s[m-i] == t[n-j])
             ans[i][j] = 1+ans[i-1][j-1];
        else{
            int a = ans[i-1][j];
            int b = ans[i][j-1];
            int c = ans[i-1][j-1];
            ans[i][j] = max(a, max(b, c));
        }
      }
  }

    return ans[m][n];
}

// memoization
int lcs2(int **ans, string s, string t){
    if(s.size() == 0 || t.size() == 0)
       return 0;

    if(ans[s.length()][t.length()] != -1){
        return ans[s.length()][t.length()];
    }
    
    if(s[0] == t[0]){
         return 1+lcs2(ans, s.substr(1),t.substr(1));
    }else{
         int a = lcs2(ans, s.substr(1),t);
         int b = lcs2(ans, s, t.substr(1));
         int c = lcs2(ans, s.substr(1), t.substr(1));

        ans[s.length()][t.length()] = max(a,max(b,c));
        return max(a,max(b,c));
    }   
}

int lcs2(string s, string t){
    int **ans = new int*[s.size()+1];
    for(int i=0; i<=s.size(); i++){
        ans[i] = new int[t.size()+1];
        for(int j=0; j<=t.size(); j++){
            ans[i][j] = -1;
        }
    }

    return lcs2(ans, s, t);
}

// brute force
int lcs1(string s, string t){
    if(s.size() == 0 || t.size() == 0)
       return 0;

     if(s[0] == t[0])
       return 1+lcs1(s.substr(1),t.substr(1));
     else{
         int a = lcs1(s.substr(1),t);
         int b = lcs1(s, t.substr(1));
         int c = lcs1(s.substr(1), t.substr(1));

         return max(a,max(b,c));
     }    
}

/*
xyz
zxay

2
2
2
*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    string s,t;
    cin >> s >> t;
    
    cout << lcs1(s,t) << endl;   // 2
    cout << lcs2(s,t) << endl;   // 2
    cout << lcs2(s,t) << endl;   // 2

    return 0;   
}