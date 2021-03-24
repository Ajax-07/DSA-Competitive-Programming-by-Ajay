//  ..............  construct a binary tree from given pre-order and in-order data nodes ............ 

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"

//.......... construct tree from pre-order and in-order .............
binaryTree<int>*  helper(int in[], int pre[], int inS,int inE, int preS, int preE){

    if(inS>inE || preS>preE)
       return NULL;

    binaryTree<int>* root =  new binaryTree<int>(pre[preS]);
 //.............................Left inorder and preorder.............   
    int Left_inorder_start = inS;                 // 1 value 
    int i=inS;               
    while(in[i] != pre[preS])
           i++;

    int Left_inorder_end = i-1;                          // 2 value

    int left_preorder_start = preS+1;                // 3 value
    
    int left_preorder_end = Left_inorder_end - Left_inorder_start + left_preorder_start;        // 4 value 

    
//.......................... right inorder and preorder ..................
   int right_inorder_start = i+1;       // 5 value
   int right_inorder_end = inE;                        // 6 value
   int right_preorder_start = left_preorder_end + 1;   // 7 value
   int right_preorder_end = preE;                    // 8 value

 //.............................. make tree with calling recursion .............
  root->left = helper(in, pre,Left_inorder_start,Left_inorder_end, left_preorder_start, left_preorder_end) ;
  root->right = helper(in , pre, right_inorder_start, right_inorder_end, right_preorder_start,right_preorder_end);


    return root;
}

binaryTree<int>* constructTree(int in[], int pre[], int nodes){

  return helper(in, pre, 0,nodes-1, 0, nodes-1);
} 

//.............. Print ...........
void print(binaryTree<int>* root){
    if(root == NULL)
     return;

     queue <binaryTree<int>*> Q;
     Q.push(root);

     while(!Q.empty()){
         binaryTree<int>* front = Q.front();
         Q.pop();

         cout << front->data << " : ";

         if(front->left){
             cout << "L " << front->left->data << ", " ;
             Q.push(front->left);
         }

         if(front->right){
             cout << "R " << front->right->data ;
             Q.push(front->right);
             
         }
         cout << endl;
    }

}




/*
i/p ---------------------->
15
4 2 6 5 7 1 10 8 12 14 13 15 11 3 9
1 2 4 5 6 7 3 8 10 11 12 13 14 15 9 

o/p  --------------------->
1 : L 2, R 3
2 : L 4, R 5
3 : L 8, R 9
4 : 
5 : L 6, R 7
8 : L 10, R 11
9 : 
6 : 
7 : 
10 : 
11 : L 12, 
12 : R 13
13 : L 14, R 15
14 : 
15 : 


*/


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int nodes;
    cin >> nodes;

    
    int in[nodes];
     for(int i=0; i<nodes; i++)
         cin >> in[i];

     int pre[nodes];
     for(int i=0; i<nodes; i++)
         cin >> pre[i];
    
   binaryTree<int>* root = constructTree(in,pre,nodes);
   print(root); 

    return 0;
}
