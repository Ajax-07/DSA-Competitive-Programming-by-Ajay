//..... Tree Implimentation : take input , print , preorder traversal , post order traversal and delete tree ...........                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

#include <bits/stdc++.h>
using namespace std;
#include "TreeNode.h"

treeNode<int>* takeInput(){ 
    int rootData;
   cout << "Enter a data for root : " << endl;
    cin >> rootData;

    treeNode<int>* root = new treeNode<int>(rootData);
    
    int n;
   cout << "Enter the number of children for root " << rootData << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        treeNode<int>* temp = takeInput();
        root->children.push_back(temp);
    }

    return root;
        
}

void printTree(treeNode <int>* root){

    //eadge case
    if(root == NULL)
    return ;

    cout << root->data << " : ";
    
    for(int i=0; i<root->children.size(); i++){
        if(i == root->children.size()-1)
           cout << root->children[i]->data;
        else  
          cout << root->children[i]->data << ",";   
    }
    cout << endl;
    for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    } 
}

//   ............. pre order trasversal ................
void preOrderTraversal(treeNode<int>* root){
    if(root == NULL)
      return;


      cout << root->data << " ";

      for(int i=0; i<root->children.size(); i++){
          preOrderTraversal(root->children[i]);
      }
}


//..................post order traversal ..................
void postOrderTraversal(treeNode<int>* root){
    if(root == NULL){
        return ;
    }

    for(int i=0; i<root->children.size(); i++)
         postOrderTraversal(root->children[i]);

    cout << root->data << " " ;     
}


//....... Delete Tree  (postOrder) .............
void deleteTree(treeNode <int>* root){
    if (root == NULL){
        return;
    }

    for(int i=0; i<root->children.size(); i++)
        deleteTree(root->children[i]);

    delete root;    
}

int main(){
    #ifndef ONLINE_JUDGE 
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
      
    
    treeNode<int>* root =  takeInput(); // 1 3 2 2 5 0 6 0 3 1 7 0 4 1 8 2 1 0 9 1 6 0
    printTree(root);

    cout << endl << endl;
    
    cout << "pre-order traversal : ";
    preOrderTraversal(root);  // pre-order traversal : 1 2 5 6 3 7 4 8 1 9 6
    

    cout << endl;
    
    cout << "post-order traversal : ";
    postOrderTraversal(root);  // post-order traversal : 5 6 2 7 3 1 6 9 8 4 1 
 

   delete root;

   //  OR ..........
 //   deleteTree(root);
    return 0;
    
}