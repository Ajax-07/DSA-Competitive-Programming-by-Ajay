//................. Find second largest node in tree ..............
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

#include <bits/stdc++.h>
using namespace std;
#include "TreeNode.h"

template <typename T>
struct Pair{
    treeNode<T>* max;
    treeNode<T>* secondMax;

    public:
      Pair(treeNode<T>* max, treeNode<T>* secondMax){
          this->max = max;
          this->secondMax = secondMax;
      }
};

Pair<int>*  secondLargest(treeNode<int>* root){

      if(root  == NULL){
          Pair<int>*  ans = new Pair<int>(NULL,NULL);
          return ans;
      }

      Pair<int>* ans = new Pair<int>(root,NULL);
    

      for(int i=0; i<root->children.size(); i++){
          Pair<int>* temp = secondLargest(root->children[i]);

          
          if(ans->max->data<temp->max->data){
              treeNode<int>* x = ans->max;
              ans->max = temp->max;


              if(ans->secondMax == NULL && temp->secondMax == NULL)
                  ans->secondMax= x;
               else if(ans->secondMax == NULL || temp->secondMax != NULL)
                      ans->secondMax = (x->data>temp->secondMax->data) ? x : temp->secondMax;
               else
                  ans->secondMax = x;          
          }
          else{
               if(ans->secondMax == NULL && temp->secondMax == NULL)
                  ans->secondMax = temp->max;
               else if(ans->secondMax == NULL || temp->secondMax != NULL)
                      ans->secondMax = temp->max;
               else
                  ans->secondMax= (ans->secondMax->data>temp->max->data) ? ans->secondMax : temp->max; 
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
   // printTree(root);

   
    
    cout << endl << endl;
     
    Pair<int>* res = secondLargest(root); 
     cout << "Second Largest Node  : " << res->secondMax->data;



    return 0;
    
}