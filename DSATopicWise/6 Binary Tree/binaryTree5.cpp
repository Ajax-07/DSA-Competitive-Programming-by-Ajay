
//................... find the diameter of tree .......................

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"


//...........  BETTER APPROACH ............

pair<int,int> heightDiameter(binaryTree<int>* root){
    if(root == NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }


    pair<int,int> leftAns = heightDiameter(root->left);
    pair<int,int> rightAns = heightDiameter(root->right);

    int lh = leftAns.first;
    int rh = rightAns.first;
    int ld = leftAns.second;
    int rd = rightAns.second;

   pair<int,int> ans;
   ans.first = 1+max(lh,rh);
   ans.second = max(lh+rh,max(ld,rd));

   return ans;
}


//............ TC : O(n*h) where h is height of tree..........
// ............   TC may be from O(nlogn) to O(n^2)...............
int height(binaryTree<int>* root){
    if(root == NULL)
     return 0;

     return 1+max(height(root->left), height(root->right));
}

int diameter(binaryTree<int>* root){
    if(root == NULL)
      return 0;

    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);

    return max(option1, max(option2,option3));  
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

i/p ----------------->
1 2 3 4 5 -1 -1 6 -1 -1 7 8 -1 -1 9 -1 -1 -1 -1


o/p ------------------>
Diameter of tree : 6
Diameter of tree : 6

*/


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    binaryTree<int>* root = takeInput();
     
     cout << endl;

    cout << "Diameter of tree : " << diameter(root) ;   //O(n*h) : it may be O(nlogn) or O(n^2)
    
    cout << endl;
    
    pair<int,int> res = heightDiameter(root);         //0(n)
    cout << "Diameter of tree : " <<  res.second ;  

    return 0;
}