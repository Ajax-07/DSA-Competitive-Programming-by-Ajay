// .............. implimenting and use of binaryTree class, taking input , printing tree ...........  

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"

void printBinaryTree(binaryTree<int>* root){
    if(root == NULL)
       return;

     cout << root->data << " ";
     printBinaryTree(root->left);
     printBinaryTree(root->right);  

}

// print node with their child

void orLikeThis(binaryTree<int>* root){
    if(root == NULL)
       return;

     cout << root->data << ": ";
     if(root->left)
         cout << "L " << root->left->data << ", ";
     if(root->right)
           cout << "R " <<  root->right->data;
     cout << endl;

     orLikeThis(root->left);
     orLikeThis(root->right);  

}

// Take Input From User ............

binaryTree<int>* takeInput(){
   
    int data; 
    cin >> data;
    cout << endl;

    if(data == -1)
      return NULL;

    binaryTree<int>* root = new binaryTree<int>(data);
    
    cout << "Enter Data for Left Node Of " << data << " : ";
    root->left = takeInput();
    
    cout << "Enter Data for Right Node Of " << data << " : ";
    root->right = takeInput();
    

    return root;
}

//....... take input level wise......

binaryTree<int>* takeInputLevelwise(){

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


// print tree level wise 

void printLevelWise(binaryTree<int>* root){
    if(root == NULL)
     return;
     
     
     queue<binaryTree<int>*> Q;
     Q.push(root);

     
     while(!Q.empty()){
         binaryTree<int>* front = Q.front();
         cout << front->data << " : ";
         Q.pop();

         if(front->left != NULL){
             cout << "L " << front->left->data << ", ";
             Q.push(front->left);
         }
           if(front->right != NULL){
             cout << "R " << front->right->data;
             Q.push(front->right);
         }
         cout << endl;
     }
}


// ........................ driver function ........................
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
  /*....................................................................................................*/  
    binaryTree<int>* root = new binaryTree<int>(10);
    binaryTree<int>* node1 = new binaryTree<int>(20);
    binaryTree<int>* node2 = new binaryTree<int>(30);
    binaryTree<int>* node3 = new binaryTree<int>(40);
    binaryTree<int>* node4 = new binaryTree<int>(50);
    binaryTree<int>* node5 = new binaryTree<int>(60);
    binaryTree<int>* node6 = new binaryTree<int>(70);
    binaryTree<int>* node7 = new binaryTree<int>(80);
  
   // .......  connect all nodes with root
   root->left = node1;
   root->right = node2;
   node1->left = node3;
   node2->left = node4;
   node2->right = node5;
   node4->left = node6;
   node4->right = node7;


   /*  Binary Tree ......
           10
           /\
          /  \
        20    30
       /      / \
      /      /   \
     40     50    60
            /\
           /  \
          70   80
   */
 
   //........... printing  tree..............
 
   printBinaryTree(root); 
  /*........................................................................................................*/
   /*...........O/P = 10 20 40 30 50 70 80 60  

    Or print like .........

      10: 20, 30
      20: 40, 
      40: 
      30: 50, 60
      50: 70, 80
      70: 
      80: 
      60:
                                                                   */ 
   cout << endl;
   orLikeThis(root);  
   
   cout << endl << endl;
   
   

/*.......................................................................................................................*/

    // Now take input tree from User ...........
    //ex. = 10 20 40 -1 -1 -1 30 50 70 -1 -1 80 -1 -1 60 -1 -1

     cout << "Enter a root data : " ;
     binaryTree<int>* root2 = takeInput();
  
   printBinaryTree(root2);

   cout << endl;

   // OR......
   orLikeThis(root2);
   cout << endl << endl;

    delete root2;
    
/*.....................................................................................................................................*/
    /*
    //............. take input level wise ............
    
    
    // ex. = 10 20 30 40 -1 50 60 -1 -1 70 80 -1 -1 -1 -1
    binaryTree<int>* root3 = takeInputLevelwise();
    cout << endl;

    printBinaryTree(root3);
    cout << endl << endl;

    orLikeThis(root3);

    delete root3;
    */

/*......................................................................................................................................*/
   
// print tree level wise ..........


 cout << endl;
 printLevelWise(root);
 
 /*
 O/P = 
10 : L 20, R 30
20 : L 40, 
30 : L 50, R 60
40 : 
50 : L 70, R 80
60 : 
70 : 
80 : 

 */
//delete root pointer.............
delete root;

/*....................................................................*/
   return 0;

}