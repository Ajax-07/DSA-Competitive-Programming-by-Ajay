// using trie class

#include<bits/stdc++.h>
using namespace std;

#include "Implimentation.h"

bool findPattern(){
    
    int n;
    cin >> n;
    trie TRIE;
    
    for(int i=1; i<=n; i++){
        string str;
        cin >> str;
      
        for(int j=0; j<str.length(); j++){
             string word = "";
            for(int k=j; k<str.length(); k++){
                word += str[k];
                TRIE.insert(word);
            }

        }   
    }

    string pattern;
    cin >> pattern;
    cout << pattern << " ";

    return TRIE.search(pattern);
}


/*

4
4
abc def ghi cba
de
4
abc def ghi hg
hi
4
abc def ghi hg
hig

de Matched !
hi Matched !
hig Didn't Matched !

*/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

   int test_cases;
   cin >> test_cases;
   while(test_cases--){
    
    
    findPattern() ? cout << "Matched !" : cout << "Didn't Matched !" ;
    cout << endl;


   }
   return 0;

}