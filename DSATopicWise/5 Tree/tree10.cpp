//................. Replace node withe their depth value ..............
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

#include <bits/stdc++.h>
using namespace std;
#include "TreeNode.h"

//........helper function with two args (recursion calls here)...............
void helper(treeNode<int>* root, int depth){
    if(root == NULL)
    return;
    root->data = depth;
    for(int i=0; i<root->children.size(); i++)
         helper(root->children[i],depth+1);
}


//............ our function................
void replaceWithDepth(treeNode<int>* root){
    if(root == NULL)
       return;

     int depth=0;
     helper(root,depth);  
}


treeNode<int>* takeInput(){
    int rootData;
    cout << "Enter root  data : "  << endl;
    cin >> rootData;

    treeNode <int>* root  = new treeNode<int>(rootData);

    queue <treeNode<int>*> Q;
    Q.push(root);

    while(!Q.empty()){
        treeNode <int>* front  = Q.front();
        Q.pop();

        cout << "Enter Number of child for " << front->data << endl;
        int num;
        cin >> num;
        for(int i=0; i<num; i++){
            cout << "Enter the " << i << "th data " << endl;
            int childData;
            cin >> childData;
            treeNode <int>* temp = new treeNode<int>(childData);
            Q.push(temp);
            front->children.push_back(temp);
        }
    }
    return root;

}

void printTree(treeNode<int>* root){
     if(root == NULL)
       return ;

    cout << root->data  << " : ";

    for(int i=0; i<root->children.size(); i++){
        if(i == root->children.size()-1)
          cout << root->children[i]->data;
        else 
        cout << root->children[i]->data << ", ";  
    }
 cout << endl;
    for(int i=0; i<root->children.size(); i++)
        printTree(root->children[i]);
}

int main(){
    #ifndef ONLINE_JUDGE 
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
      
    treeNode<int>* root =  takeInput();
     printTree(root);

   
   replaceWithDepth(root);
     printTree(root);


    return 0;
    
}