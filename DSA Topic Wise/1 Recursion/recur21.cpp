// ............ return keypad approach ..........

#include <bits/stdc++.h>
using namespace std;

const char word[10][5]
    = { "",    "",    "abc",  "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz" };

int keypad(int n , string output[]){
    if(n==0){
      output[0]="";
      return 1;
    }

   string key = word[n%10]; 
   int size = keypad(n/10,output);

   for(int i=0; i<size; i++){
       for(int j=0; j<key.size(); j++)
         output[j+size]  = output[i] + key[j];

         size *= 2; 
   }

   return size;
    
 

}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
   
   int n; cin >> n;

  string* output = new string[1000];
    
  int size = keypad(n,output);

  for(int i=0; i<size; i++)
      cout << output[i] << endl; 

    delete output;

    return 0;   
}