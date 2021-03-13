//................. Find Next Larger Element in tree ..............
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

#include <bits/stdc++.h>
using namespace std;
#include "TreeNode.h"


treeNode<int>*  nextLarger(treeNode<int>* root, int k){


      if(root  == NULL)
      return 0;

      treeNode<int>* ans; 
      if(k<root->data)
          ans = root;
      else 
        ans = NULL;

      for(int i=0; i<root->children.size(); i++){
          treeNode<int>* temp = nextLarger(root->children[i],k);

          if(ans == NULL)
              ans = temp;
          if(ans->data > temp->data){
               ans = temp;
           }   
      } 

      return ans;     

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
      
     int k; cin >> k;
    treeNode<int>* root =  takeInput();
   // printTree(root);

   
    
    cout << endl << endl;

     
     cout << "Next Larger Node  : " << nextLarger(root, k)->data;


    
    
    return 0;
    
}