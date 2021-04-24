// using trie class

#include<bits/stdc++.h>
using namespace std;

#include "Implimentation.h"

void printAllWord(trie* TRIE, string word,string output){
    if(word.size() == 0){
        cout << word + output << endl; 
    }

    output += word[0];
    int index = word[0]-'a';
    if()
    printAllWord()
}

void printAllWord(trie* TRIE, string word){
    string output = "";
    printAllWord(TRIE,word,output);
}


void autoComplete(){

    int n; cin >> n;
    trie* TRIE = new trie;

    while(n--){
        string word;
        cin >> word;

        TRIE->insert(word);
    }

    string pattern;
    cin  >> pattern ;


    printAllWord(TRIE,word);

}

/*

*/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

   int test_cases;
   cin >> test_cases;
   while(test_cases--){

       autoComplete();
       cout << endl;

   }
   return 0;

}