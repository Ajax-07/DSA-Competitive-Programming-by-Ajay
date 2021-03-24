//................. print binary Tree in ZigZag Fashion ..............

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"

void ZigZagTree(binaryTree<int>* root){
    if(root == NULL)
        return ;

    stack <binaryTree<int>*> s1;    
    stack <binaryTree<int>*> s2;

    s1.push(root);

    while(!s1.empty() || !s2.empty()){

        while(!s1.empty()){
            binaryTree<int>* top = s1.top();
            s1.pop();

            cout << top->data << " ";

            if(top->left)
                 s2.push(top->left);
            
            if(top->right)
                 s2.push(top->right);     
        }
        cout << endl;
         while(!s2.empty()){
            binaryTree<int>* top = s2.top();
            s2.pop();

            cout << top->data << " ";
            
            if(top->right)
                 s1.push(top->right);

            if(top->left)
                 s1.push(top->left);          
        }

       
           cout << endl;
           
    }    
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


/*
i/p : ------------>
2
1 2 3 4 5 6 7 -1 -1 8 9 -1 10 -1 -1 -1 -1 -1 -1 11 12 -1 -1 -1 -1
1 2 3 4 5 6 7 -1 -1 8 -1 -1 9 -1 -1 -1 -1 10 -1 -1 -1 

o/p : ------------>

1 
3 2 
4 5 6 7 
10 9 8 
11 12

1 
3 2 
4 5 6 7 
9 8 
10 

*/


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
      
      int test; cin >> test;
      while(test--){
           binaryTree<int>* root = takeInput();

           cout << endl;
           ZigZagTree(root);
           cout << endl;
      } 


return 0;
    
}

