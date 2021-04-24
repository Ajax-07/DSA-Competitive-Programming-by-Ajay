// using trie class

#include<bits/stdc++.h>
using namespace std;

#include "Implimentation.h"


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

   trie t;
   t.insert("this");
   t.insert("that");
   t.insert("these");
   t.insert("where");
   t.insert("what");

   cout << t.search("where") << endl;    // 1
   cout << t.search("what") << endl;   // 1
   cout << t.search("whose") << endl;    // 0
   cout << t.search("these") << endl;      // 1
   cout << t.search("ball") << endl;   // 0
   cout << t.search("this") << endl;     // 1
   cout << t.search("that") << endl;      // 1

   t.remove("these");
   t.remove("apple");
   t.remove("where");

  cout << t.search("these")  << endl;  // 0
  cout << t.search("that")  << endl;   // 1
  cout << t.search("whose")  << endl;  // 0 
  cout << t.search("where")  << endl;  // 0


   return 0;

}