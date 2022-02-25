#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "q", stdout);
    #endif


    int truckSpace;
    cin >> truckSpace;
    int package;
    cin >> package;
    int packageUnit[package];
    for(int i=0; i<package; i++)
       cin >> packageUnit[i];

    unordered_map<int, int> mp;

    truckSpace -= 30;
    int maxSpace = INT_MIN;
    int a=-1,b=-1;
    for(int i=0; i<package; i++){
        int x = truckSpace-packageUnit[i];
        if(mp.find(x) == mp.end()){
            mp.insert({packageUnit[i], i});
        }else{
            if(maxSpace<)
        }
    }   


}