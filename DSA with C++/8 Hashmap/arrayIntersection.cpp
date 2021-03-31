//  find the the intersection of two array

#include<bits/stdc++.h>
using namespace std;

vector<int>  intersection(int a[],int b[], int n, int m){
    unordered_map <int,bool> m1;

    for(int i=0; i<n; i++){
        m1.insert(pair<int,bool>(a[i],true));
    }
    
    vector<int> output;
    for(int i=0; i<m; i++){
        if(m1.count(b[i])  > 0)
          output.push_back(b[i]);
    }

    return output;
}

/*

*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test; 
    cin >> test;

    while(test--){
        int n,m;
        cin >> n >> m;
        int a[n], b[m];

        for(int i=0; i<n; i++)
           cin >> a[i];

        for(int i=0; i<m; i++)
           cin >> b[i];  
      
       vector<int> res = intersection(a,b,n,m);  


       for(int i=0; i<res.size(); i++)
            cout << res[i] << " "; 
              
     cout << endl;
    }


    return 0;
}