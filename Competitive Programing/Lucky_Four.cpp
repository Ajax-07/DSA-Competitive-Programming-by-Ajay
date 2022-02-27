#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int count=0;
        while(n){
            if(n%10 == 4)
              count++;

            n/=10;  
        }
        cout << count << endl;
    }
    
}