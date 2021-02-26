//..............Tower of honai.........


#include<bits/stdc++.h>
using namespace std;
void TowerOfhonai(int n, char src, char help, char dest){
    if(n==0)
      return;

    TowerOfhonai(n-1,src,dest,help);
      cout << "Moved from " << src << " to " << dest << endl;
    TowerOfhonai(n-1,help,src,dest);    

  
    
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    //   source   -->   A
    //   Helper   -->   B
    //   Destination   -->   C
    TowerOfhonai(3,'A','B','C');

    return 0;
}