#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int test ;
cin >> test;

while(test--){

   int n;
   cin >> n;

   string s ;
   cin >> s;

   char chararr[]{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'}; 
   string result="";

  int i=0;
   while(i<n){
     string temp = s.substr(i,i+4);
      result += chararr[int(stoi(temp,0,2))];
     i+=4;
   }


   cout << result << "\n";

 }

 return 0;
}

