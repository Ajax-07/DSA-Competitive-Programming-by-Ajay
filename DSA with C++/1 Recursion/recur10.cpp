// ..........   Josephus problem : The game of death .........................................
//...........   n people in a circle way kill kth persion in every........
//............  iteration and find the last survivor..................


#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    int n, k;

    cin >> n >> k;

    cout << survivor(n,k) << endl;

    return 0;
}    