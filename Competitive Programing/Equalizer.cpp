// Equalizer : codeforces - [https://codeforces.com/problemset/problem/1037/C]

#include<bits/stdc++.h>
using namespace std;

long long  fun(string str1, string str2 ,long long n){
    long long cost=0;
    
    long long i=0;
    while(i<n){
        if(str1[i]!=str2[i]){
            //swap
            if( i<n-1 && str1[i] != str1[i+1] && str1[i+1] != str2[i+1]){
                i+=2;
            }//flip
            else{
                i++;
            }
            cost++;
        }else i++;
    }

    return cost;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    long long n;
    cin >> n;
    string str1;
    string str2;

    cin >> str1 >> str2;
    cout << fun(str1,str2,n) ;

    return 0;
}