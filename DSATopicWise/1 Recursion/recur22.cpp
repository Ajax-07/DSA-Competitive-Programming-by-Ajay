// ........... print all subsequences of string without taking extra space ........

#include<bits/stdc++.h>
using namespace std;

void subseq(string s, string subsequences){
    if(s.empty()){
        cout << subsequences << endl;
        return;
    }

    subseq(s.substr(1),subsequences);
    subseq(s.substr(1),subsequences+s[0]);

}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
   
    string s;
    cin >> s;
   
    string subsequences = "";
    subseq(s,subsequences);

    return 0;   
}