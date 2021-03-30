//  find the element with most frequency

#include<bits/stdc++.h>
using namespace std;

int mostFrequency(int arr[], int n){
    unordered_map <int,int> freq;

    for(int i=0; i<n; i++){
        if(freq.count(arr[i]) > 0)
            freq.at(arr[i]) += 1;
        else 
            freq.insert(pair<int,int>(arr[i],1));    
    }
   
    int maxFreq = freq.at(arr[0]);
    int ans = arr[0];

    unordered_map<int,int> :: iterator it = freq.begin();
    while(it != freq.end()){
       
       if(maxFreq<it->second){
           maxFreq = it->second;
           ans = it->first;
       }

        it++;
    }

    return ans;

}


/*
I/P :
2
10
5 5 1 5 3 6 3 2 1 2
13
2 12 2 11 12 2 1 2 2 11 12 2 6

O/P :
5
2

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
    int arr[n];

    for(int i=0; i<n; i++)
     cin >> arr[i];

    cout << mostFrequency(arr, n) << endl; 
    }


    return 0;
}