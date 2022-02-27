#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int tc;
    cin >> tc;

    while(tc--){
        unordered_set<char> Set;
        string J, S;
        cin >> J >> S;

        int i=0; 
        while(i<J.size()){
            Set.insert(J[i]);
            i++;
        }

        i=0;
        int cnt=0;
        while(i<S.size()){
            if(Set.find(S[i]) != Set.end())
                 cnt++;
            i++;     
        }

        cout << cnt << endl;
    }
    return 0;
}