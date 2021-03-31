// ............... print all subsequences of a string ..........

#include <bits/stdc++.h>
using namespace std;

int subseq(string s , string output[]){
    if(s.empty()){
      output[0]="";
      return 1;
    }

   
   int n= subseq(s.substr(1),output);

    for(int i=0; i<n; i++){
        output[n+i] = s[0] + output[i];
    }
   return 2*n;

}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
   
    string s;
    cin >> s;



    string* output = new string[100];
    
   int size =  subseq(s,output);

    for(int i=0; i<size; i++)
       cout << output[i] << endl;
    
    delete output;

    return 0;   
}