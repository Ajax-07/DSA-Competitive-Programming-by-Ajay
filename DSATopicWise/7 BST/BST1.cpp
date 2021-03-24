// ......................... take input for Binary Search Tree TC: O(logN)..................................

#include<bits/stdc++.h>
using namespace std;

#include "BSTClass.h"

BST<int>* searchBST(BST<int>* root,int n){
    if(root == NULL || root->data == n)
      return root;

    if(n<root->data) 
       return searchBST(root->left,n);

    return searchBST(root->right,n);  

    /*

      // OR 
      BST<int>* curr = root;

    while(curr){
        
        if(curr->data == n)
          return curr;
        if(curr->data > n)
           curr = curr->left;
        else curr = curr->right;     
    }   
    return curr;     
    
    */
}

//print BST
void print(BST<int>* root){
    if(root == NULL)
      return;

    queue<BST<int>*> Q;
    Q.push(root);  

    while(!Q.empty()){
        BST<int>* front = Q.front();
        Q.pop();

        cout << front->data << " : ";

        if(front->left != NULL){
            cout << "L" << front->left->data << " ";
            Q.push(front->left);
        }
      
        if(front->right != NULL){
            cout << "R" << front->right->data ;
            Q.push(front->right);
        }  
        cout << endl;  

    }
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
2

1229 501 1551 145 627 1382 1677 93 289 569 677 1334 1410 1556 1803 -1 -1 -1 299 -1 -1 -1 1184 -1 -1 -1 1482 -1 1604 -1 1862 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
627

1177 416 1474 364 684 1392 1498 -1 -1 -1 694 -1 1456 -1 1930 -1 -1 -1 -1 -1 -1 
1120

o/p:
627

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
    int n; cin >> n;

    print(root);

     BST<int>* res = searchBST(root, n) ;

     cout << "\n";
     if(res)
        cout << res->data;
     else 
        cout << "Not found" ;

     cout << endl;     

   }
  return 0; 

}