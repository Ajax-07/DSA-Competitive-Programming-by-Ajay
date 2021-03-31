//  find the the intersection of two array

#include<bits/stdc++.h>
using namespace std;

pair <int, int> pairSum(int arr[], int n, int target){
    unordered_set<int> s;
    pair<int,int> output;
    for(int i=0; i<n; i++){
        if(s.count(target-arr[i])){
            output.first = arr[i];
            output.second = target-arr[i];
            break;
        }
        s.insert(arr[i]);
    }

    return output;
}

/*
i/p:
2
6
7 6 3 4 -5  2 
2
8
-4 -1 1 3 5 6 8 11
10

o/p:
-5 7
11 -1

*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test; 
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int a[n];

        for(int i=0; i<n; i++)
           cin >> a[i];
        
        int target; cin >> target;


     pair<int,int> res = pairSum(a,n,target);

     cout << res.first << " " << res.second ;
              
     cout << endl;
    }


    return 0;
}