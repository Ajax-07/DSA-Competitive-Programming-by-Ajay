#include<bits/stdc++.h>
using namespace std;
#include "TA.h"

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt","w",stdout);
    #endif
     
    TA ta;
    
    ta.print();
    ta.student :: print();
    ta.teacher :: print();

    return 0;
}