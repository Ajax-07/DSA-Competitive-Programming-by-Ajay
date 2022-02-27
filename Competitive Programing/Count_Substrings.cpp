#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        long long cnt=0;
        int i=0; 
        while (i<n)
        {
            if(str[i] == '1')
                cnt++;
            i++;    
        }
        
        long long ans = cnt*(cnt+1)/2;
        cout << ans << endl;
        
    }

    return 0;
}