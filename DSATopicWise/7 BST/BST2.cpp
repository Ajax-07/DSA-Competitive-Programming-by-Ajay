// .........................  print element in a given range from BST   ..................................

#include<bits/stdc++.h>
using namespace std;

#include "BSTClass.h"

void printInRange(BST<int>* root, int a,int b){
    if(root == NULL)
     return ;
    
    if(a<root->data)
        printInRange(root->left, a,b);
   
    if(root->data >= a && root->data <= b)
        cout << root->data << " ";

    if(b>root->data)
        printInRange(root->right, a,b);    
   
}


//take input
BST<int>* takeInput(){
    cout << "Enter Root Node : " << endl;
    int data;
    cin >> data;

    BST<int>* root = new BST<int>(data);

    queue<BST<int>*> temp;
    temp.push(root);

    while(!temp.empty()){
        BST<int>* front = temp.front();
        temp.pop();

        int leftNode;
        int rightNode;

        cout << "Enter Left node for " << front->data << ": " << endl;
        cin >> leftNode;
        cout << "Enter right node for " << front->data << ": " << endl;
        cin >> rightNode;

        if(leftNode != -1){
            BST<int>* left = new BST<int>(leftNode);
            front->left = left;
            temp.push(left);
        } 
        if(rightNode != -1){
            BST<int>* right = new BST<int>(rightNode);
            front->right = right ;
            temp.push(right);
        } 

    }

    return root;
}


/*
i/p:
4
687 -1 -1 
100 600
1177 416 1474 364 684 1392 1498 -1 -1 -1 694 -1 1456 -1 1930 -1 -1 -1 -1 -1 -1 
400 500
1229 501 1551 145 627 1382 1677 93 289 569 677 1334 1410 1556 1803 -1 -1 -1 299 -1 -1 -1 1184 -1 -1 -1 1482 -1 1604 -1 1862 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
500 700
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
6 10


o/p:

____
416
501 569 627 677 
6 7 8 10 

Not found
*/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

   int test; cin >> test;
   while(test--){
    BST<int>* root = takeInput();
    int a;
    int b;
    cin >> a >> b;

    cout << endl;

    printInRange(root, a, b);
    cout << endl;
    
   }
  return 0; 

}