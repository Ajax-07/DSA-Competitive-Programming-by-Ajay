//  given an array remove duplicate element

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDup(int arr[], int n){
    vector <int> output;
    unordered_map <int, bool> check;

    for(int i=0; i<n; i++){
        if(check.count(arr[i]) == 0){
            output.push_back(arr[i]);
            check.insert(pair<int, bool>(arr[i],true));
        }            
    }

    return output;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
     cin >> arr[i];

    vector <int> res = removeDup(arr,n);

    for(int i=0; i<res.size(); i++)
      cout << res.at(i) << " ";

    return 0;
}