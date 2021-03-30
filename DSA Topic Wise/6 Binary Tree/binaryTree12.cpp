//....................... pair sum in binary tree...................

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"


int LCA(binaryTree<int>* root, int n1, int n2){
     if(root == NULL)
      return -1 ;

     if(root->data == n1 || root->data == n2) 
         return root->data;

     int a = LCA(root->left , n1, n2);
     int b = LCA(root->right, n1,n2);

     if(a == -1 || b == -1)
       return max(a,b); 

     return root->data;     
 }

// take input..................
binaryTree<int>* takeInput(){

    cout << "Enter Root Data : ";
    int data; cin >> data;
    cout << endl;
     
     if(data == -1)
     return NULL;

    binaryTree<int>* root = new binaryTree<int>(data);
    queue<binaryTree<int>*> Q;
    Q.push(root);

    while(!Q.empty()){
        binaryTree<int>* front = Q.front();
        Q.pop();

        cout << "Enter left child for " << front->data  << " : ";
        int leftchild; cin >> leftchild;
        
        cout << endl;
        if(leftchild!=-1){
            binaryTree<int>* child = new binaryTree<int>(leftchild);
            front->left = child;
            Q.push(child);
        }

        cout << "Enter right child for " << front->data  << " : ";
        int rightchild; cin >> rightchild;

        if(rightchild!=-1){
            binaryTree<int>* child = new binaryTree<int>(rightchild);
            front->right = child;
            Q.push(child);
        }
        cout << endl;
    }
return root;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

           binaryTree<int>* root = takeInput();
           int n1, n2 ;
           cin >> n1 >> n2;

           cout << endl << "LCA : "  << LCA(root,n1,n2);
      
return 0;
    
}