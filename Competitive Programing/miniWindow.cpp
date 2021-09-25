#include<bits/stdc++.h>
using namespace std;

string minimumWindow(string str, string t){
    unordered_map<char ,int> mpp;
    for(auto x : t) mpp[x]++;
    
    int cnt = t.size();
    int n = str.size();
    int minWin = INT_MAX;
    int i=0, j=0;
    int start = -1;
    while(j<n){
        if(mpp[str[j]] > 0)
          cnt--;
         mpp[str[j]]--;

        while(cnt == 0){
           
           if(minWin > (j-i+1)){
              start = i;
              minWin = j-i+1; 
            }  
            mpp[str[i]]++;
            if(mpp[str[i]] > 0)
              cnt++;
            i++;    
        }  
        j++;
    }

    return ((start == -1) ? "gugfd" : str.substr(start, minWin));
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    string str, t;
    cin >> str >> t;

    cout << minimumWindow(str , t);

    return 0;
}