// Problem Statement: return the first non-repearting character from given string

#include<bits/stdc++.h>
using namespace std;

char nonRepeating(string str){
    unordered_map<char, int> m;

    for(int i=0; i<str.length(); i++)
        m[str[i]]++;

    for(int i=0; i<str.length(); i++){
        if(m[str[i]] == 1)
           return str[i];
    }
  return str[0];
}

/*
 i/p: 
2
aDcadhc
gdhIgHada

o/p :
D
h
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

        cout << nonRepeating(str);
        
        cout << endl;
   } 

    return 0;
}