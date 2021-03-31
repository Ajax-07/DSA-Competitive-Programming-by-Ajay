
//..... count leaf node  ...........                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

#include <bits/stdc++.h>
using namespace std;
#include "TreeNode.h"


//................. count leaf node ..............

int countLeaf(treeNode<int>* root){
    
    if(root == NULL)
     return 0;
    
    if(root->children.size() == 0)
     return 1;
     
     int count = 0;
     for(int i=0; i<root->children.size(); i++){
         count += countLeaf(root->children[i]);
     }

     return count;
    
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
      
    
    treeNode<int>* root =  takeInput();  // 2 3 3 5 8 1 7 1 6 1 2 0 2 3 9 0 1 4 1 5 0 1 7 0
    printTree(root);
    
    cout << endl << endl;

    cout << "total Leaf node of tree : " << countLeaf(root); // total Leaf node of tree : 4
    
    
    return 0;
    
}