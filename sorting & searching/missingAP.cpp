// #22 - [https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1#]

#include<bits/stdc++.h>
using namespace std;

 int inSequence(int A, int B, int C){
        // code here
        if(!C) return A==B;

        int n = B-A/C;
        return ((B-A)%C == 0 && n>=0);
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif
    int A,B,C;
    cin >> A >> B >> C;

    cout << inSequence(A,B,C);
    return 0;
}