#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        while(n--){
            int I, R, Q;
            cin >> I >> R >> Q;
            
            int head=0;
            int tail=0;
            if(I==1){
              if(R%2 == 0){
                  head = tail = R/2;
              }else{
                  head = R/2;
                  tail = R/2+1;
              }
            }else{
              if(R%2 == 0){
                  head = tail = R/2;
              }else{
                  tail = R/2;
                  head = R/2+1;
              }
            }
            
           Q==1 ?  cout << head << endl : cout << tail << endl;
        }
    }
}