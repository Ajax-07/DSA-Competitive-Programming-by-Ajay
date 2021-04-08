// given a range find all prime lies in th range (segmentaed seive prime)

#include<bits/stdc++.h>
using namespace std;

int allprime(int a,int b){
    int n = b-a;
    bool arr[n];
    
   
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int testCase;
    cin >> testCase;
    while(testCase--){
        int a,b;
        cin >> a >> b;
       
       cout << allprime(a,b) << endl;   // O(nloglogn)
    }

    return 0;    
}