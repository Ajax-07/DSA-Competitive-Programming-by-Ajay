// ............. level order traversal of binry tree .............

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"


//....... printing levelorder .........
void levelOrder(binaryTree<int>* root){
    if(root == NULL)
       return ;

    queue<binaryTree<int>*> Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()){
        binaryTree<int>* front = Q.front();
        Q.pop();

        if(!Q.empty() && front == NULL){
            Q.push(NULL);
            cout << endl;
        }
        if(front != NULL){

            cout << front->data << " ";

            if(front->left != NULL)
                Q.push(front->left);

            if(front->right != NULL)
                  Q.push(front->right);     
        }
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
i/p ----------->
6    
1 2 3 4 -1 5 -1 6 -1 7 -1 -1 -1 -1 -1
1 2 3 4 9 5 10 6 -1 -1 -1 7 -1 -1 -1 -1 -1 -1 -1
1 -1 2 -1 3 -1 4 -1 5 -1 -1
1 2 3 4 -1 -1 -1 -1 -1 
1 2 3 4 -1 -1 -1 -1 5 -1 -1 
10 20 30 -1 -1 40 50 -1 -1 60 70 1 2 80 90 -1 -1 -1 -1 -1 -1 100 -1 -1 110 -1 -1 

o/p--------------------->
1 
2 3 
4 5 
6 7 

1 
2 3 
4 9 5 10 
6 7 

1 
2 
3 
4 
5 

1 
2 3 
4 

1 
2 3 
4 
5 

10 
20 30 
40 50 
60 70 
1 2 80 90 
100 
110 


*/



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
      
      int test; cin >> test;
      while(test--){
           binaryTree<int>* root = takeInput();

        cout << "\n";
      
        levelOrder(root);

        cout  << "\n\n\n";
      } 


return 0;
    
}