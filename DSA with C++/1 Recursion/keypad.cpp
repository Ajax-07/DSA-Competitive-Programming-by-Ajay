#include<bits/stdc++.h>
using namespace std;

vector<char> keyArr(int n){
    vector<vector<char>> key(10);
    key[0] = {'\0'};
    key[1] = {'\0'};
    key[2] = {'a','b','c'};
    key[3] = {'d','e','f'};
    key[4] = {'g','h','i'};
    key[5] = {'j','k','l'};
    key[6] = {'m','n','o'};
    key[7] = {'p','q','r','s'};
    key[8] = {'t','u','v'};
    key[9] = {'w','x','y','z'};

    return key[n];
}

vector<string> fun(int n){
    if(n==0){
        vector<string> ans = {""};
        return ans;
    }
   

    vector<string> smallAns = fun(n/10);

    vector<char> key = keyArr(n%10);

    vector<string> ans;

    for(int i=0; i<smallAns.size(); i++)
       ans.push_back(smallAns[i]);

     for(int i=0; i<smallAns.size(); i++)
        for(int j=0; j<key.size(); j++)
           ans.push_back(smallAns[i]+key[j]);


     return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    vector<string> ans = fun(n);
    
   
    for(int i=0; i<ans.size(); i++)
          cout << ans[i] << endl;

    return 0;

}