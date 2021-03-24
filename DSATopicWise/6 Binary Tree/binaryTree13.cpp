
//....................... return the path of root to given node in bianry tree as vector...................

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"

vector<int>* rootToNodePath(binaryTree<int>* root, int node){
    if(root == NULL)
      return NULL;

    if(root->data == node){
        vector<int>* v = new vector<int>();
        v->push_back(root->data);
        return v;
    } 

    vector<int>* left = rootToNodePath(root->left,node);
    if(left){
         left->push_back(root->data);
      return left; 
    }
    vector <int>* right = rootToNodePath(root->right,node);
    if(right){
        right->push_back(root->data);
        return right;
    }
    return NULL;
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

          int test; cin >> test;
          while(test--){
              binaryTree<int>* root = takeInput();

              int node; cin >> node;

              vector<int>* res = rootToNodePath(root, node);

              for(int i=0; i<res->size(); i++)
                 cout << res->at(i) << " ";

               cout << endl << endl;

               delete root;  
               delete res;
          }
return 0;
    
}