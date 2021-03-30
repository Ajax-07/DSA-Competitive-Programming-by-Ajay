//  .......................  use of inbuilt hashmap ..........................

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    unordered_map<string ,int> ourmap;

    pair<string,int> p("abc", 10);

    // insert in map
    ourmap.insert(p);   //or
    ourmap["def"] = 20;

    cout << ourmap.size() << endl;    // 2

    // access

    cout << ourmap.at("abc") << endl;     // 10
    cout << ourmap["def"] << endl;     //20
   // cout << ourmap.at("ghi") << endl;   // error "out_of_range"
    cout << ourmap["ghi"] << endl;   // 0 (first insert then put 0 as default value)
    cout << ourmap.size() << endl;   // 3
    
    // check presence
    if(ourmap.count("ghi") > 0)
       cout << "it is present" << endl;
    else cout << "Not present" << endl;

    if(ourmap.count("jkl") > 0)
       cout << "it is present" << endl; 
    else cout << "Not present" << endl;     

    // erase
    ourmap.erase("def");
    if(ourmap.count("def") > 0)
       cout << "it is present" << endl; 
    else cout << "Not present" << endl;     
    cout << ourmap.size() << endl;
    
    return 0;
}