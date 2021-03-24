//.................... check if tree is balanced ..................

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"


//...........  BETTER APPROACH ............

pair<int,bool> heightBalanced(binaryTree<int>* root){
    if(root == NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = true;
        return p;
    }    

    pair<int,bool> leftAns = heightBalanced(root->left);
    pair<int,bool> rightAns = heightBalanced(root->right);
    
    int LH = leftAns.first;
    int RH = rightAns.first;

    if(abs(LH-RH) > 1){
        pair<int,bool> ans1;
        ans1.second = false;
        ans1.first = 1+max(LH,RH);
        return ans1;
    }

    int leftcheck = leftAns.second;
    int rightcheck = rightAns.second;

    if(leftcheck && rightcheck){
        pair<int , bool> ans2;
        ans2.first = 1+max(LH,RH);
        ans2.second = true;
        return ans2; 
    }

    else{
         pair<int , bool> ans3;
        ans3.first = 1+max(LH,RH);
        ans3.second = false;
        return ans3; 
    }


}


//............ TC : O(n*h) where h is height of tree..........
// ............   TC may be from O(nlogn) to O(n^2)...............
int height(binaryTree<int>* root){
    if(root == NULL)
     return 0;

     return 1+max(height(root->left), height(root->right));
}

bool isBalanced(binaryTree<int>* root){
    if(root == NULL)
      return true;

   int LH  = height(root->left);
   int RH = height(root->right);
    
    if(abs(LH-RH) > 1) 
    return false;

   bool a = isBalanced(root->left);
   bool b = isBalanced(root->right);
    
    if(a&&b)
        return true;
   
    return false;

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

i/p --------------------->
5    
1 2 3 4 -1 5 -1 6 -1 7 -1 -1 -1 -1 -1
1 2 3 4 9 5 10 6 -1 -1 -1 7 -1 -1 -1 -1 -1 -1 -1
1 -1 2 -1 3 -1 4 -1 5 -1 -1
1 2 3 4 -1 -1 -1 -1 -1 
1 2 3 4 -1 -1 -1 -1 5 -1 -1 

o/p ------------------->
Not Balanced
Not Balanced

Balanced
Balanced

Not Balanced
Not Balanced

Balanced
Balanced

Not Balanced
Not Balanced






princple : if |left_height - right_height|  <= 1 means balanced 

*/





int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int test; cin >> test;
   while(test--){
    binaryTree<int>* root = takeInput();

    isBalanced(root) ? cout <<  "Balanced" << endl : cout << "Not Balanced" << endl;       //  O(n*h) : it may be O(nlogn) or O(n^2)
    heightBalanced(root).second ? cout <<  "Balanced" << endl : cout << "Not Balanced" << endl;   // O(n)

    cout << "\n\n\n";

   }
   
    return 0;
}