// replace duplicate character

#include<bits/stdc++.h>
using namespace std;

// recursive 
string replace2(string str){
    if(str.size() == 0)
    return "";

    char first = str[0];
    string res = replace2(str.substr(1));

    if(first != res[0])
      return first+res;
    else return res;

}

// iterative
string replace1(string str){
    
    string res="";
    res += str[0];
    int i=1; 
    while(i<str.length()){
        if(str[i] != str[i-1]){
            res +=str[i];
        }
        i++;
    }
    return res;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif 

    string str ;
    cin >> str;
   cout << replace1(str) << endl;
   cout << replace2(str) << endl;

    return 0;
}
