
#include<bits/stdc++.h>
using namespace std;

class Solution{public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        if(n==0 || m==0){
            return 0;
        }
        
        if(S1[0] == S2[0]){
            int a = 1+longestCommonSubstr(S1.substr(1),S2.substr(1), n-1, m-1);
        }
    }
};


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    string s1,s2;
    cin >> s1 >> s2;

    Solution s;
    cout << s.longestCommonSubstr(s1,s2,s1.length(), s2.length()) << endl;
   

    return 0;   
}