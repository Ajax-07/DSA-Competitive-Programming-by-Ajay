// #5 - [https://practice.geeksforgeeks.org/problems/middle-of-three2926/1]

#include<bits/stdc++.h>
using namespace std;

 int middle(int A, int B, int C){
        //code here
        int mx = max(A,max(B,C));
        int mn = min(A,min(B,C));
        
        //return (A+B+C)-(mx+mn); // or
        return mx^mn^A^B^C;
        
    }
 
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int a,b,c;
    cin >> a >> b >> c;

    cout << middle(a,b,c);
    
    return  0;
}