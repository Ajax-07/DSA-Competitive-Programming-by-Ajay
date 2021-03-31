//............... contest 1 : problem 1 : Kth nearest point  ..................

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int testCase;
    cin >> testCase;
    while(testCase--){
        string s;
        cin >> s;
        
        
        if(s.length()<=2)
            cout << s << endl;

        else{
        string res="";
        res += s[0];
        res += s[1];
        int i=2;
         
        while(i<s.length()){
            if(s[i] != s[i-1])
                res += s[i];
            i++;    
        }

        cout << res << endl;
        }    
    }

    return 0;    
}