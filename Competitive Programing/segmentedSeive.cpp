// given a range find all prime lies in th range (segmentaed seive prime)

#include<bits/stdc++.h>
using namespace std;

int allprime(int a,int b){
    int n = b-a;
    bool arr[n];
    
   
    for(int i=0; i<n; i++)
        arr[i] = a+i;
    vector<int> temp;
    
    for(int i=2; i*1<=n; i++){
        if(arr[i])
         for(int j=i*i; j<=n; j+=i)
              arr[j] = false;
    }
   
   int count=0;
    for(int i=2; i<=n; i++)
        if(arr[i])
            count++;    
    return count;
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