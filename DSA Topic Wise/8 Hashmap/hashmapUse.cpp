
// Useing our implemented map class

#include<bits/stdc++.h>
using namespace std;
#include "Hashmap.h"

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ourMap<int> m;
    cout << m.size() << endl;


    for(int i=0 ; i<20; i++){
      char c = '0'+i;
      string key = "abc";
      key = key+c;
      int value = i*10;

      m.insert(key, value);
    }
    
    cout << m.size() << endl;

    for(int i=0 ; i<20; i++){
      char c = '0'+i;
      string key = "abc";
      key = key+c;
       cout << m.getValue(key) << endl;
    }

    for(int i=9 ; i<15; i++){
      char c = '0'+i;
      string key = "abc";
      key = key+c;
      
       cout << m.remove(key) << endl;
    }
    
    cout << m.size() << endl;

    return 0;
}