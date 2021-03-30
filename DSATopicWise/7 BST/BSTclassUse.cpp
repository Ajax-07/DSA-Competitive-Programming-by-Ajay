
//.............. using of BSTclass.................

#include<bits/stdc++.h>
using namespace std;

#include "BSTImpliment.h"



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    BSTclass bst;
    bst.insertData(50);
    bst.insertData(30);
    bst.insertData(40);
    bst.insertData(80);
    bst.insertData(10);
    bst.insertData(70);
    bst.insertData(90);
    bst.insertData(60);
    bst.insertData(100);
    bst.insertData(20);

    bst.searchData(70) ? cout << "YES" : cout << "NO";
    cout << endl;
    bst.print();
    cout << endl;

    bst.deleteData(70);
    bst.deleteData(700);
    bst.deleteData(30);
    bst.deleteData(90);
    bst.print();
    cout << endl;
  return 0; 

}