//................. Find The Node With maximum sum of children including node ..............
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

#include <bits/stdc++.h>
using namespace std;
#include "TreeNode.h"


//................. Node With maximum sum of children  ..............
treeNode<int>*  MaxSumNode(treeNode<int>* root){


      if(root  == NULL)
      return 0;
       
       treeNode<int>* ans = root;
       int maxSum = root->data; 
       for(int i=0; i<root->children.size(); i++){
           maxSum += root->children[i]->data;
       }
       
       
       for(int i=0; i<root->children.size(); i++){
           treeNode<int>* maxNode =  MaxSumNode(root->children[i]);
       
      int  sum =  maxNode->data;
      for(int i=0; i<maxNode->children.size(); i++)
           sum += maxNode->children[i]->data;

       if(sum > maxSum ){
           ans = maxNode;
           maxSum = sum;
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
      
    
    treeNode<int>* root =  takeInput();
    printTree(root);
    
    cout << endl << endl;

     
     cout << "maximum sum node  : " << MaxSumNode(root)->data;


    
    
    return 0;
    
}