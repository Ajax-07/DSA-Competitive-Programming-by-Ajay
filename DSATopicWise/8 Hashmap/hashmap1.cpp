// Problem Statement: Extract Unique characters. return given string after removing duplicate char.

#include<bits/stdc++.h>
using namespace std;


string extractChar(string s){
  unordered_set<char> myset;
  string res="";

  int i=0;
  while(i<s.length()){
    if(myset.count(s[i]) == 0){
      res += s[i];
      myset.insert(s[i]);
    }
    i++;
  }
  
 
   return res;
}

/*
i/p:
3
ababacd
abcde
aabcddccdacgfsf

o/p:
abcd
abcde
abcdgfs

*/

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
   
   int test; cin >> test;
   while(test--){
    string str;
    cin >> str;

    cout << extractChar(str) << endl; 
   } 

    return 0;
}