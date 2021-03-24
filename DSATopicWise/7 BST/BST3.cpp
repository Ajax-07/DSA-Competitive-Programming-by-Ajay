// .........................  Check the binary tree is BST?  3 approach ..................................

#include<bits/stdc++.h>
using namespace std;

#include "BSTClass.h"

//................ 3. TC : O(N)

bool isBST3(BST<int>* root, int min = INT_MIN, int max = INT_MAX){
    if(root == NULL)
      return true;
    
    if(root->data < min || root->data > max)
         return false;

    bool leftcheck = isBST3(root->left, min, root->data-1);
    bool rightcheck = isBST3(root->right , root->data, max);

    return (leftcheck && rightcheck);        
}

//...................  2. TC : O(N)
class bstCheck{
    public:
    bool check;
    int min;
    int max;
};

bstCheck isBST2(BST<int>* root){
   if(root == NULL){
       bstCheck base;
       base.check = true;
       base.min = INT_MAX;
       base.max = INT_MIN;
       return base;
   }

   bstCheck left = isBST2(root->left);
   bstCheck right = isBST2(root->right); 

   bool finalCheck = (left.check && right.check) && (left.max < root->data) && (right.min >= root->data);
   int finalMin = min(root->data,min(left.min,right.min));
   int finalMax = max(root->data,max(left.max,right.max));

   bstCheck finalRes;
   finalRes.check = finalCheck;
   finalRes.min = finalMin;
   finalRes.max = finalMax;    
   return finalRes;

}

//........................
int maximum(BST<int>* root){
    if(root == NULL)
     return INT_MIN;

    int leftmax = maximum(root->left); 
    int rightmax = maximum(root->right);

    return max(root->data,max(leftmax,rightmax)); 

}


int minimum(BST<int>* root){
    if(root == NULL)
     return INT_MAX;

    int leftmin = minimum(root->left); 
    int rightmin = minimum(root->right);

    return min(root->data,min(leftmin,rightmin)); 

}

//  1. .......... TC : O(N*Height of tree) or O(N*h);

bool isBST1(BST<int>* root){
   if(root == NULL)
       return true;

    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);

    return (leftMax < root->data && rightMin > root->data && isBST1(root->left) && isBST1(root->right)) ;

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
1073 -1 -1
1080 384 2970 71 1090 2037 3393 -1 -1 -1 1027 -1 2618 -1 3930 -1 -1 -1 -1 -1 -1
2102 1051 3630 406 1289 2358 3807 112 591 1126 1381 2130 3522 3631 3825 -1 -1 -1 701 -1 -1 -1 1881 -1 -1 -1 3621 -1 3642 -1 3897 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
1177 1474 416 364 684 1392 1498 -1 -1 -1 694 -1 1456 -1 1930 -1 -1 -1 -1 -1 -1 


o/p:

TRUE
FALSE
TRUE
FALSE

*/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

   int test; cin >> test;
   while(test--){
    BST<int>* root = takeInput();
   

   // 1. TC : O(N*Hight)
    cout << endl;
    isBST1(root) ?  cout << "TRUE" : cout << "FALSE";
    cout << endl;

    // 2.  OR........ TC : O(N)   
   
   bstCheck res = isBST2(root);
   res.check ? cout << "TRUE" : cout << "FALSE";
   cout << endl;
   
   // 3. OR TC : O(N)......
    
   isBST3(root) ? cout << "TRUE"  : cout << "FALSE";
   cout << endl; 
  
    
   }
  return 0; 

}