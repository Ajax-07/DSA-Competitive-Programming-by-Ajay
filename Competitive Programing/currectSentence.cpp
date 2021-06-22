// codechef : currect sentence [https://www.codechef.com/START4C/problems/CORTSENT]
#include<bits/stdc++.h>
using namespace std;

bool check(string &str){ 
    bool first, second;
    first = second = false;
    bool ans = true;

    int i=0;
    while(i<str.size()){
        if(str[i] >= 'a' && str[i] <= 'm')
           first = true;
        else if(str[i] >= 'N' && str[i] <= 'Z')
            second = true;
        else ans = false;

        if(first && second)
            ans = false;   
        i++;        
    }
  return ans;
}

void solve(){
    int n; 
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++)
      cin >> arr[i] ;

    for(int i=0; i<n; i++){

        if(!check(arr[i])){
            cout << "NO" << endl;
            return;
        }
    }

  cout << "YES" << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test; cin >> test;
    while(test--) solve();

    return 0;
}